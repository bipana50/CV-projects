//var usersRef = firebase.database().ref().child("people").push();
//usersRef.set({
//    date_of_birth: "June 02, 1997",
//    full_name: "kalu maya"
// 
//});

var rootref=firebase.database().ref().child("Book");
rootref.on("child_added",snap=> {
	//alert(snap.val());
	var author=snap.child("author").val();
	var fname=snap.child("fname").val();
	var name=snap.child("name").val();
	var genre=snap.child("genre").val();
	var condition=snap.child("condition").val();
	var image=snap.child("image").val();
	var phone=snap.child("phone").val();
	var price=snap.child("price").val();



	$('.row').append("<div class='col-lg-3 col-md-3 col-sm-4 col-xs-6'><div class='thumbnail'><a href='#'><img class='bookimg' src="+image+"></a><div class='caption'><h3>"+name+"</h3><p class='sub' >Author:"+author+"</p><p class='sub'>Genre:"+genre+"</p><p class='sub'>Condition:"+condition+"</p><p class='seller'><strong>Seller:"+fname+","+phone+"</strong></p><p class='seller'>Price:"+price+"</div></div></div>");
	//console.log(author);
	//console.log(name);
});