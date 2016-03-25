<?php
error_reporting(E_ALL);
ini_set("display_errors", 1);

$user = $_GET["user"];

$mysqli = new mysqli("mysql.eecs.ku.edu", "cwelch", "Compsci", "cwelch");
if ($mysqli->connect_errno)
{
  	printf("Connect failed: %s\n", $mysqli->connect_error);
  	exit();
}

echo "<center><table border='6'>";
echo "<tr>";
echo "<th>Post ID</th>";
echo "<th>Post Content</th>";
echo "</tr>";

$query = "SELECT post_id, content, author_id FROM Posts";

if($result = $mysqli->query($query))
{
	while($row = $result->fetch_assoc())
	{
		if($user == $row["author_id"])
		{
			echo "<tr>";
			echo "<td>".$row["post_id"]."</td>";
			echo "<td>".$row["content"]."</td>";
			echo "</tr>";
		}
	}
}

echo "</table>";
?>  
