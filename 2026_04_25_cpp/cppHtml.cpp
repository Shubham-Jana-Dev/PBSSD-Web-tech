#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    
    // THE PRO FIX: Allow immediate reuse of the port so refresh doesn't fail
    int opt = 1;
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    bind(server_fd, (struct sockaddr *)&address, sizeof(address));
    listen(server_fd, 10); // Allow more "waiting" connections

    std::cout << "Server Live at http://localhost:8080 (Press Ctrl+C to stop)" << std::endl;

    while (true) {
        int new_socket = accept(server_fd, NULL, NULL);
        if (new_socket < 0) continue;

        // Use \r\n for professional HTTP standards
        std::string response = 
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/html\r\n"
            "Connection: close\r\n\r\n"
            "<html><body style='background:#121212; color:#00ff00; font-family:monospace; text-align:center;'>"
            "<h1>SYSTEM ONLINE</h1>"
            "<p>C++ Network Socket: Active</p>"
            "<p>This page is served directly from RAM.</p>"
            "</body></html>";

        send(new_socket, response.c_str(), response.length(), 0);
        
        // Close only the connection socket, NOT the server socket
        close(new_socket); 
    }
    return 0;
}