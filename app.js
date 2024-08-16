let container = document.querySelectorAll("container");
let boxes = document.querySelectorAll(".box");
let reset = document.querySelector("#reset-game");
let newGame = document.querySelector("#New-game");
let message  = document.querySelector("#message");
let winnergame = document.querySelector(".winner-game");
let draw = document.querySelector(".draw");
let msg = document.querySelector("#msg");

let turn0  = true; 

let winner = [
    [0,1,2],
    [3,4,5],
    [6,7,8],
    [0,3,6],
    [1,4,7],
    [2,5,8],
    [0,4,8],
    [2,4,6]
]

const resetGame = () =>{
    turn0 = true;
    enableBoxes();
    winnergame.classList.add("hide");


};
const Newgame = () =>{
    turn0 = true;
    enableBoxes();
    winnergame.classList.add("hide");

}

// draw condition not working
count = 1;
const Draw = () =>{
    
   draw.classList.remove("hide");
     
     newGame.addEventListener("click" ,() =>{
        Newgame();
    })
     count++;

}



// cheching the winning position ans winner
const disableBoxes = () =>{
    for(let box of boxes){
        box.disabled = true;
    }
}
const enableBoxes = () =>{
    for(let box of boxes){
        box.disabled = false;
        box.innerText = "";
    }
}
const showWinner = (winn) =>{
    message.innerText = `Congratulstion , Winner is ${winn}`;
    winnergame.classList.remove("hide");
    disableBoxes();
};
const checkwinner = () =>{
  for(let pattern of winner){

   let pos1Val =  boxes[pattern[0]].innerText;
   let pos2Val = boxes[pattern[1]].innerText;
   let pos3Val = boxes[pattern[2]].innerText;
   if(pos1Val!="" && pos2Val !="" && pos3Val !=""){
    if(pos1Val===pos2Val && pos2Val===pos3Val){
        console.log("winner" , pos1Val);
        
        showWinner(pos1Val);
    }
   }
  };
 
 

};
  // cheching the turn of each player
boxes.forEach((box) =>{
    box.addEventListener("click" , () =>{
         
         if( turn0){
            box.innerText = "O";
            turn0 = false;
         }
         else{
            box.innerText = "X";
            turn0 = true;
         }
          box.disabled = true;

          checkwinner();
    });
});

reset.addEventListener("click" , ()=>{
    resetGame();
})

newGame.addEventListener("click" ,() =>{
    Newgame();
})

container.addEventListener("click" , ()=>{
    Draw();
})

// boxes.forEach((bo) =>{
//     bo.addEventListener("click" , ()=>{
//         Draw();
//     })
// })



 

