<?php

$mysqli = new mysqli("mysql.eecs.ku.edu", "cwelch", "Compsci", "cwelch");
if ($mysqli->connect_errno)
{
	printf("Connect failed: %s\n", $mysqli->connect_error);
	exit();
}

$query = "SELECT post_id FROM Posts";

if($result = $mysqli->query($query))
{
	while($row = $result->fetch_assoc())
	{
		if($_GET[$row["post_id"]])
		{
			$query2 = "DELETE FROM Posts WHERE post_id='".$row["post_id"]."'";	
			if($result2 = $mysqli->query($query2))
			{
					echo "<center>";
					echo $row["post_id"].", ";
			}
		}
	}

	$result->free();
}

$mysqli->close();
echo "<center>You have deleted the above posts posts";
?> 
