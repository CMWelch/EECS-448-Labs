function Manipulate()
{
	var color1 = document.getElementById("red1").value;
	var color2 = document.getElementById("green1").value;
	var color3 = document.getElementById("blue1").value;
	var color4 = document.getElementById("red2").value;
	var color5 = document.getElementById("green2").value;
	var color6 = document.getElementById("blue").value;
	var border = document.getElementById("width").value;	
	document.getElementById("cssm").style.backgroundColor=rgb(red2,green2,blue2);
	document.getElementById("cssm").style.borderColor=rgb(red1,green1,blue1);
	document.getElementById("cssm").style.borderWidth=border;
}
