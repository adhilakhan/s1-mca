<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
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
    input[type=text],input[type=password]
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
            <h2>LOGIN</h2>
        <table>
            <tr>
                <td colspan="2">
                    <input type="text" name="usrname" placeholder="Username">
                </td>
            </tr>
            <tr>
                <td colspan="2">
                    <input type="password" name="pswrd" Placeholder="password">
                </td>
            </tr>
            <tr>
                <td> 
                    <input type="submit" value="Login" name="login" style="margin-left:15px;" >
            &nbsp;&nbsp;
            &nbsp;&nbsp;&nbsp;
                 <input type="reset" value="clear" style="margin-left:0px;">
                </td>
            </tr>
        </table>
        <P>
            Not a user ? <big><a href="register.php">Register Now</a></big>
    </p>
    </form>
    </fieldset>
    </html>
    <?php
    include('connection.php');
if(isset($_POST['login']))
{
    $uname=$_POST['usrname'];
    $pswd=$_POST['pswrd'];
    
    $f=0;
   
        $sel="select*from Login";
        $ss=mysqli_query($con,$sel);
        if($ss)
        {
            if(mysqli_num_rows($ss)>0)
            {
                 while($res=mysqli_fetch_array($ss))
                 { 
                      if($res['Username']==$uname&&$res['Password']==$pswd)
                     $f=1;
                  }
             }
            if($f!=0)
             {
                $sele="select*from Login where Username='$uname' and Password='$pswd'";
                $s=mysqli_query($con,$sele);
                $ress=mysqli_fetch_array($s);
                session_start(); 
                $_SESSION['username']=$ress['Username'];
                $_SESSION['name']=$ress['Name'];
                if($ress['Login_type']=='Admin')
                    header("location:admindashboard.php");
                
                echo "<script>alert('Succesfull  Login');</script>";
             }
             else
             {
                echo "<script>alert('Sorry, Try again ');</script>";
            }
        }
       
    else
            echo "<script>alert('Sorry, Try again');</script>";

  }
?>