<?php
$mysqli = new mysqli("mysql.eecs.ku.edu", "cwelch", "Compsci", "cwelch");
if ($mysqli->connect_errno)
{
  	printf("Connect failed: %s\n", $mysqli->connect_error);
  	exit();
}

echo "<center><table border='6'>";
echo "<tr>";
echo "<th>User Number</th>";
echo "<th>User ID</th>";
echo "</tr>";

$query = "SELECT user_id FROM Users";
$number = 1;

if($result = $mysqli->query($query))
{
	while($row = $result->fetch_assoc())
	{
		echo "<tr>";
		echo "<td>".$number."</td>";
		echo "<td>".$row["user_id"]."</td>";
		echo "</tr>";
		$number++;
	}
}

echo"</table>";

$mysqli->close();
?>
