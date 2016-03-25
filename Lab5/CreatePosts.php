<?php
	$user = $_GET["user"];
	$Post = $_GET["post"];
	$author = false;

	if($Post == "")
	{
		echo "<center>Post content may not be blank";
	}
	else
	{
		$mysqli = new mysqli("mysql.eecs.ku.edu", "cwelch", "Compsci", "cwelch");
		if ($mysqli->connect_errno)
		{
	    		printf("Connect failed: %s\n", $mysqli->connect_error);
	    		exit();
		}

	 	$query = "SELECT user_id FROM Users";
	 
	 	if($result = $mysqli->query($query))
	 	{
	 		while ($row = $result->fetch_assoc())
			{
	 			if($user == $row["user_id"])
				{
					$author = true;
	 			}
	  		}
	 
	 		$result->free();
	 	}
	 
	 	if($author)
	 	{
	 		$query2 = "INSERT INTO Posts (content, author_id) VALUES ('$Post', '$user')";
	 
	 		if($result = $mysqli->query($query2))
	 		{
	 			echo "<center>Post added";
	 		}		
	 	}
	 	else
	 	{
	 		echo "<center>This user does not exist";
	 	}
	 	$mysqli->close();
	}
?>
