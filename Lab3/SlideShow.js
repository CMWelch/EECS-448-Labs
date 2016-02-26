function prevSlide()
{
	var pic=document.getElementById("first");
	if(pic.name =="pic1")
	{
		pic.src="music5.jpg";
	  	pic.name="pic5";
	}
	else if(pic.name == "pic2")
	{
		pic.src="music1.jpg";
		pic.name="pic1";
	}
	else if(pic.name=="pic3")
	{
		pic.src="music2.jpg";
		pic.name="pic2";
	}
	else if(pic.name=="pic4")
	{
		pic.src="music3.jpg";
		pic.name="pic3";
	}
	else if(pic.name=="pic5")
	{
		pic.src="music4.jpg";
		pic.name="pic4";
	}
}

function nextSlide()
{
	var pic=document.getElementById("first");
	if(pic.name =="pic4")
	{
		pic.src="music5.jpg";
	  	pic.name="pic5";
	}
	else if(pic.name == "pic5")
	{
		pic.src="music1.jpg";
		pic.name="pic1";
	}
	else if(pic.name=="pic1")
	{
		pic.src="music2.jpg";
		pic.name="pic2";
	}
	else if(pic.name=="pic2")
	{
		pic.src="music3.jpg";
		pic.name="pic3";
	}
	else if(pic.name=="pic3")
	{
		pic.src="music4.jpg";
		pic.name="pic4";
	}
}
