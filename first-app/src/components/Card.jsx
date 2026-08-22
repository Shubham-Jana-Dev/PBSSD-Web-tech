import React from "react";
import './Card.css'

const Card = (props) =>{
    return (
        <div className="card">
            <h4>{props.title}</h4>
            <p>{props.desccription}</p>
        </div>
    )
}
export default Card