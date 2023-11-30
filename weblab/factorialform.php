<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>factorial
    </title>
    <style>
    body{
        margin: 50px;
    }
    fieldset{
        border: 0;
        border-radius: 5px;
        background-color: rgb(187, 218, 242);
        margin-left: 250px;
        margin-right: 250px;
        padding: 50px;
    }
    td,th{
        align-items: center;
        padding:5px;
    }
    input{
        border:none;
        padding: 3px;
        border-radius: 3px;
    }
    input:focus {
    border: none;
    outline: 1px solid rgb(57, 133, 234);
      }
      select:focus {
    border: none;
    outline: 1px solid rgb(57, 133, 234);
      }
      input[type=submit],input[type=reset]{
        width:100px;
        padding:7px;
        outline: 1px solid rgb(57, 133, 234);
      }
      input[type=submit]:hover,input[type=reset]:hover{
        transform: scale(1.3);
        transition:2s;
        cursor: pointer;
      }
</style>
</head>
<body>
    <center> <fieldset>
        <form action="" method="post">
        <table>
            <tr>
                <th>Enter Any Number<br></th>
                <td>
                    <input type="text" name="Number"><br>
                </td>
          </tr>
          <tr>
            <td> <input type="submit" value="Get Factorial" name="sub"><br> </td>
            <td><input type="reset" value="Clear"><br></td>
          </tr>
        </table></form>
   
<?php
$num=$_POST['Number'];
$fact=1;
for($i=1;$i<=$num;$i++)
   $fact*=$i;
if (isset($_POST['sub']))
{
?>
 <table>
            <tr>
                <th>Factorial<br></th>
                <td>
                    <input type="text" name="fact" readonly value=" <?php echo $fact; ?> ">
                </td>
          </tr>
</table>
<?php
}
?>
</fieldset>
 </center>
</body>
</html>