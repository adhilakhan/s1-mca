<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Freshers World</title>
</head>
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
    td{
        align-items: center;
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
<?php
$name=$_POST['name'];
$age=$_POST['age'];
$security=$_POST['securtiy'];
$sa=$_POST['qa'];
$email=$_POST['email'];
$lg=$_POST['lang'];
$offph=$_POST['off'];
$homeph=$_POST['home'];

?>
<body>
    
    <center>
        <fieldset >
    <h1>ENTERED DETAILS</h1>
        <center> <form >
<table >
    <tr>
        <td>Name</td>
        <td colspan="2"> <input type="text" readonly value="<?php echo $name; ?>"></td>
    </tr>
    <tr>
        <td>Age</td>
        <td colspan="2">
        <input type="text" readonly value="<?php echo $age; ?>">
        </td>
    </tr>
    <tr>
        <td>Your security question</td>
        <td colspan="2"><input type="text" readonly value="<?php echo $security ?>"></td>
    </tr>
    
    <tr>
        <td>Answer of the security question </td>
        <td colspan="2"><input type="text" readonly value="<?php echo $sa ?>"> </td>
    </tr>
    <tr>
        <td>Email-id</td>
        <td colspan="2"><input type="text" readonly value="<?php echo $email ?>"></td>
    </tr>
    <tr> 
        <td>Languages Known</td>
        <td colspan="2"><input type="text" readonly value="<?php 
        foreach ($lg as $lang){ 
            echo $lang." " ;
        }       ?>"></td>
    </tr>
    <tr >
        <td rowspan="2">Contact number</td>
        <th>Home</th>
        <th>Office</th>
    </tr>
    <tr>
        <td><input type="text" readonly value="<?php echo $homeph?>"></td>
        <td><input type="text" readonly value="<?php echo $offph ?>"></td>
    </tr>
    
</table>
</form></center>
</fieldset>
    </center>
</body>
</html>