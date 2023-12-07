<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Rgister</title>
    <style>
    body{
        margin: 0px; 
    }
    fieldset{
        border: 0;
        border-radius: 5px;
        background-color: rgb(187, 218, 242);
        margin-top:30px;
        margin-left: 350px;
        margin-right: 350px;
        padding: 50px;
    }
    td,th{
        align-items: center;
        padding: 3px;
    }
    input{
        border:none;
        padding:5px;
        border-radius: 3px;
    }
    input[type=text],input[type=password],input[type=Number]
    {
        width:100%;
        Padding:10px;
    }
    input:focus {
    border: none;
    outline: 1px solid rgb(57, 133, 234);
      }
      select:focus {
    border: none;
    outline: 1px solid rgb(57, 133, 234);
      }
      input[type=submit],input[type=reset],input[type=button]{
        width:100px;
        padding:7px;
        outline: 1px solid rgb(57, 133, 234);
      }
      input[type=submit]:hover,input[type=reset]:hover,input[type=button]:hover{
        transform: scale(1.1);
        transition:2s;
        cursor: pointer;
      }
</style>
</head>
<body>
    <?php
include('link.php');
?>
    <center>
        <fieldset>
        <form action="" method="post">
            <h2>REGISTER</h2>
        <table>
        <tr>
                <td colspan="2">
                    <input type="text" name="name" placeholder="Name" required>
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    <input type="number" name="age" Placeholder="Age" required>
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    Gender
                    <input type="radio" name="gender" value="male">Male
                    <input type="radio" name="gender" value="female">Female
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    <input type="text" name="ktuid" Placeholder="KTU ID" required>
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    <input type="text" name="roll" Placeholder="Roll No" required>
                </td>
            </tr>
            <tr>
                <td> 
                    <input type="submit" value="submit" name="sub" style="margin-left:15px;" >
            &nbsp;&nbsp;
            &nbsp;&nbsp;&nbsp;
                 <input type="reset" value="clear" style="margin-left:0px;">
                </td>
            </tr>
        </table>
</form>
</fieldset>
</center>
</body>
</html>
<?php
 include('connection.php');
    $name=$_POST['name'];
    $age=$_POST['age'];
    $g=$_POST['gender'];
    $ktu=$_POST['ktuid'];
    $roll=$_POST['roll'];
    $f=1;
      $sel="select*from student";
        $ss=mysqli_query($con,$sel);
        if($ss)
        {
            if(mysqli_num_rows($ss)>0)
            {
                 while($res=mysqli_fetch_array($ss))
                 { 
                      if($res['Ktuid']==$ktu)
                     $f=0;
                  }
             }
            if($f!=0)
             {
                  $insert="insert into student values('$name',$age,'$g','$ktu',$roll)";
                 $i=mysqli_query($con,$insert);
                 if($i)
                 {
                 echo "<script>alert('Succesfully Registered');</script>";
                 }
        }
        else
            echo "<script>alert('Sorry ,The KTU ID already exist, Try another');</script>";
    }
    else
            echo "<script>alert('Sorry, Try again');</script>";


?>  