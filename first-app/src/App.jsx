import Navbar from "./components/Navbar.jsx"
import Footer from "./components/Footer.jsx"
import Card from "./components/Card.jsx"

function App(){
  return(
    <>
      {/* <div className="app-container"> */}
        <Navbar/>
        <div className="card">

        <Card title="card 1" description="this is card 1's description :) "/>
      
        <Card title="card 2" description="this is card 2's description :) "/>

        <Card title="card 3" description="this is card 3's description :) "/>

        </div>
        <Footer/>
      {/* </div> */}
    </>
  )
}
export default App