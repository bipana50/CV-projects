firebase.auth().onAuthStateChanged(function(user) {
  if (user) {
    // User is signed in.
   // document.getElementsByClassName("outdiv1").style.display="none";
    //document.getElementsByClassName("indiv1").style.display="block";
       // window.location.href="afterlogin.html";


  } else {
    // No user is signed in.
    // document.getElementsByClassName("indiv1").style.display="none";
    //document.getElementsByClassName("outdiv1").style.display="block";
   // window.location.href="projectlogin.html";
  }
});

function login(){
	var useremail=document.getElementById("exampleInputEmail1").value;
	var userpass=document.getElementById("exampleInputPassword1").value;

	firebase.auth().signInWithEmailAndPassword(useremail, userpass).then(function(){
              window.location.href="afterlogin.html";
  
		}).catch(function(error) {
  // Handle Errors here.
  var errorCode = error.code;
  var errorMessage = error.message;
  // ...
  window.alert("error:"+errorMessage);
});
	
}

function logout(){

firebase.auth().signOut().then(function() {
  // Sign-out successful.
  alert("sign out successful");
  window.location.href="projectlogin.html";

}).catch(function(error) {
  // An error happened.
});

}