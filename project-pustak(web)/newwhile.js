function factorial(num)
{ if(num === 0 || num===1)
	{return 1;}
	 var fact=1; 
	 for(var i=num; i>=1; i--)
	 	{ fact= fact*i;}
	 	 return fact;}

	 	 console.log(factorial(4));
function kababToSnake(str){
	return str.replace(/-/g,"_");
}
console.log(kababToSnake("hello-world"));	 	 