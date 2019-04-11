var button=document.querySelector("button");
var body=document.querySelector("body");
iswhite=true;
button.addEventListener("click",function(){
	console.log("it works");
	if(iswhite){
    body.style.background="pink"; }
    else{
    	body.style.background="white";
    }
    iswhite=!iswhite;
});