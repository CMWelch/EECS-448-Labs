function myFunc()
{
	var password = document.getElementById("password");
	var cpassword = document.getElementById("Confirm_Password");
	var s1 = password.value.length;
	var s2 = cpassword.value.length;
	if(s1 < 7 && s2 < 7)
	{
		alert("Password must be 8 characters or more");
	}
	else
	{
		if(password.value != cpassword.value)
		{
			alert("Passwords do not match");
		}
		else
		{
			alert("Passwords match");
		}
	}
} 
