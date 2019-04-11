var p1score=document.querySelector("#p1score");
var p1=document.querySelector("#p1");
var p2score=document.querySelector("#p2score");
var p2=document.querySelector("#p2");
var reset=document.querySelector("#reset");
var input=document.querySelector("input");
var highscore=document.querySelector("#highscore");

var p1val=0;
var p2val=0;
var limit=5;
var gameover=false;
p1.addEventListener("click",function(){
	if(!gameover){
	p1val++;
	p1score.textContent=p1val;}
	if(p1val===limit){
		gameover=true;
		p1score.style.color="green";
	}
});

p2.addEventListener("click",function(){
	if(!gameover){
	p2val++;
	p2score.textContent=p2val;}
	if(p2val===limit){
gameover=true;
p2score.style.color="green";
	}
});
reset.addEventListener("click",function(){
	// body...
	reset1();
});

function reset1(){

	// body...
	p1val=0;
	p2val=0;
	gameover=false;
	p1score.textContent=0;
	p2score.textContent=0;
	p1score.style.color="black";
	p2score.style.color="black";
 }

input.addEventListener("change",function () {

	highscore.textContent=input.value;
	limit=Number(input.value);
	reset1();
});