<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>factorial
    </title>
</head>
<body>
    <center> <form action="" method="post">
        <table>
            <tr>
                <th>Enter Any Number</th>
                <td>
                    <input type="text" name="Number">
                </td>
          </tr>
          <tr>
            <td> <input type="sumbit" value="Get Factorial" name="sub" > </td>
            <td><input type="reset" value="Clear"></td>
          </tr>
        </table></form>
   

<?php
$num=$_POST['Number'];
$fact=1;
for($i=1;$i<=$num;$i++)
   $fact*=$i;
if isset($_POST['sub'])

?>
 <table>
            <tr>
                <th>Factorial</th>
                <td>
                    <input type="text" name="fact" value=" <?php echo $fact; ?> ">
                </td>
          </tr>
</table>
 </center>
</body>
</html>