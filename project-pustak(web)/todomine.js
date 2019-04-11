var todos=[];

window.setTimeout(function() {
  // put all of your JS code from the lecture here
  var input=prompt("what do you want to do?");
	

	while(input!=="quit"){
		if(input==="new"){
	var newtodo=prompt("enter new todo");
	todos.push(newtodo);
	console.log(newtodo+" added to the list");
	  }

	else if(input==="list"){
		todos.forEach(function(task){
			console.log("***********");
			console.log(task);
			console.log("***********");

		}) }
		else if(input==="delete"){
			var index=prompt("give the index of todo to be removed");
            todos.splice(index,1);
			

		}
		var input=prompt("what do you want to do?"); }
}, 500)

