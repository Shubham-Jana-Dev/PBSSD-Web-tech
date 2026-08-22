import Navbar from "./components/Navbar.jsx"
import Footer from "./components/Footer.jsx"
import Card from "./components/Card.jsx"
function App(){
  return(
    <>
      <div className="app-container">
        <Navbar/>
        <Card/>
        <Footer/>
      </div>
    </>
  )
}
export default App