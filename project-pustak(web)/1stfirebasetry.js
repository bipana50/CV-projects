var maintext=document.getElementById("maintext");
var btn=document.getElementById("btn");
var title=document.getElementById("title");

//firebaseheadref=firebase.database().ref().child("text");
//firebaseheadref.on("value",function(datasnapshot){
//	title.innerText=datasnapshot.val();
//});
//function thisfunc(){
//	var firebaseref= firebase.database().ref();
//	firebaseref.child("text").set("hello there");
//}
//var usersRef = firebase.database().ref().child("users");
//usersRef.set({
//  alanisawesome: {
//    date_of_birth: "June 23, 1912",
//    full_name: "Alan Turing"
//  },
//  gracehop: {
//    date_of_birth: "December 9, 1906",
//    full_name: "Grace Hopper"
//  }
//});
//var usersRef = firebase.database().ref().child("people").push();
//usersRef.set({
//    date_of_birth: "June 02, 1997",
//    full_name: "kalu maya"
// 
//});
var rootref=firebase.database().ref().child("people");
rootref.on("child_added",snap=> {
	//alert(snap.val());
	var date=snap.child("date_of_birth").val();
	var name=snap.child("full_name").val();

	$("#tabbody").append("<tr><td>"+ date +"</td><td>"+ name +"</td></tr>");
	//console.log(date);
});