<?php
$mysqli = new mysqli("mysql.eecs.ku.edu", "cwelch", "Compsci", "cwelch");
$new = $_GET["username"];
$user = true;
/* check connection */
if($new == "")
{
	echo "user name blank";
}
else
{
	if ($mysqli->connect_errno) {
	    printf("Connect failed: %s\n", $mysqli->connect_error);
	    exit();
	}

	$query = "INSERT INTO Users (user_id) VALUES ('$new')";
	$query2 = "SELECT user_id FROM Users";
	if($result = $mysqli->query($query2))
	{
		while ($row = $result->fetch_assoc()) 
		{
			if($new == $row["user_id"])
			{
				$user=false;
			}	
       			
    		}
			
	}
	if($user)
	{
		if ($result = $mysqli->query($query)) 
		{

		    /* fetch associative array */
	
			echo "user added";

		    /* free result set */
		    $result->free();
		}
	}
else
{
	echo "user already exists";
}
	/* close connection */
	$mysqli->close();
}
?>
