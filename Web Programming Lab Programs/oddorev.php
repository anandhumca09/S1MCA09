<html>
<head>
<title>Odd or Even</title>
</head>
<body>
<h2>Check Odd or Even</h2>
<form method="POST"> Enter a number: <input type="number" name="number" required>
<input type="submit" name="submit" value="Check"> </form>
<?php if (isset($_POST['submit'])) { $number = $_POST['number'];
if ($number % 2 == 0)
{ echo "$number is Even"; }
else
{ echo "$number is Odd"; }
}
?>
</body>
</html>
