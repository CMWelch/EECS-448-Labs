 function myFunc()
{
	var password = document.getElementById("password");
	var cpassword = document.getElementById("Confirm_Password");
	if(password.value != cpassword.value)
	{
		alert("Passwords don't match");
	}
	else
	{
		alert("Passwords Match");
	}

}
function zoomIn()
{
   var theImgTag = document.getElementById("myImgId");
   theImgTag.width = 1000;
   theImgTag.height = 2000;
}
