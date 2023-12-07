<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dashboard</title>
</head>
<?php
session_start(); 
?>
<style>
    body{
        margin: 0px; 
    }
    </style>
<body>
<?php
include('link.php');
?>
    <center>
    <h1 style="color:rgb(79, 198, 217);">
        Welcome <?php echo $_SESSION['name']; ?></h1>
        <h3 style="color:rgb(35, 190, 214);">Click on the links to navigate </h3>
</center>
</body>
</html>