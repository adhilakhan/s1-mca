<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>studdetails</title>
    <style>
    body{
        margin: 50px;
    }
    fieldset{
        border: 0;
        border-radius: 5px;
        background-color: rgb(187, 218, 242);
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
                    <input type="text" name="usrname" placeholder="Username" required>
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    <input type="password" name="pswrd" Placeholder="Password" Maxlength="8" pattern="(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#$%^&*_=+-]).{8}" title="Must contain at least one number and one uppercase and lowercase letter and special character, and at least 8  characters" required>
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    <input type="password" name="rpswrd" Placeholder="Re-Enter Password" Maxlength="8" pattern="(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#$%^&*_=+-]).{8}" title="Must contain at least one number and one uppercase and lowercase letter and special character, and at least 8  characters" required>
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
                    <input type="text" name="phn" Placeholder="Phone" pattern="[0-9]{10}" Maxlength="10" required>
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
        <P>
            Already a user? <big><a href="login.php">Login Now</a></big>
    </p>
</form>
</fieldset>
</center>

</body>
</html>
<?php
    include('connection.php');
    $uname=$_POST['usrname'];
    $name=$_POST['name'];
    $pswd=$_POST['pswrd'];
    $rpswd=$_POST['rpswrd'];
    $age=$_POST['age'];
    $ph=$_POST['phn'];
    $g=$_POST['gender'];
    $f=1;
    if($pswd!=$rpswd)
    {
        echo "<script>alert('Password Missmatch');</script>";
    }
    else
    {
        $sel="select*from Login";
        $ss=mysqli_query($con,$sel);
        if($ss)
        {
            if(mysqli_num_rows($ss)>0)
            {
                 while($res=mysqli_fetch_array($ss))
                 { 
                      if($res['Username']==$uname)
                     $f=0;
                  }
             }
            if($f!=0)
             {
                  $insert="insert into Login values('$name','$uname','$pswd',$age,'$g','$ph')";
                 $i=mysqli_query($con,$insert);
                 if($i)
                 {
                 echo "Succesfully Registered, Please Login";
                 header("refresh:1;url:login.php");
                 }
        }
        else
            echo "<script>alert('Sorry ,The userrname already exist, Try another');</script>";
    }
    else
            echo "<script>alert('Sorry, Try again');</script>";
}

?>