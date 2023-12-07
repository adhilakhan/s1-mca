<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Update</title>
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
    input,select{
        border:none;
        padding:5px;
        border-radius: 3px;
    }
    input[type=text],input[type=password],input[type=Number],select
    {
        width:100%;
        Padding:10px;
    }
    input:focus,select:focus {
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
include('connection.php');
include('link.php');
?>
    <center>
        <fieldset>
        <form action="" method="post">
            <h2>MARK ENTRY</h2>
        <table>
            <tr>
                <td><select name="ktu">
                    <option value="Null">Select KTU ID</option>
<?php
$sel="select Distinct Ktuid From Marks";
        $ss=mysqli_query($con,$sel);
        if($ss)
        {
            if(mysqli_num_rows($ss)>0)
            {
                 while($res=mysqli_fetch_array($ss))
                 { ?>

                 <option value="<?php echo $res['Ktuid'];?>"> <?php echo $res['Ktuid'];?></option>
                 <?php

                 }
             }
            }
     ?>
                <td>
                    <select name="Subject">
                        <option value="Null">Select Subject</option>
                     
                        <?php
$sel="select*from Subject";
        $ss=mysqli_query($con,$sel);
        if($ss)
        {
            if(mysqli_num_rows($ss)>0)
            {
                 while($res=mysqli_fetch_array($ss))
                 { ?>

                 <option value="<?php echo $res['Subcode'];?>"> <?php echo $res['subname'];?></option>
                 <?php

                 }
             }
            }
     ?>
       </td>
            </tr>

            <tr>
                <td> 
                    <input type="submit" value="submit" name="sub" style="margin-left:15px;" >
        </td>
        <td>
                 <input type="reset" value="clear" style="margin-left:0px;">
                </td>
            </tr>
            </table>
       </fieldset>
       
<?php
if(isset($_POST['sub']))
{
    $ktuid=$_POST['ktu'];
    $sub=$_POST['Subject'];
    $select="Select*From Marks Where Ktuid='$ktuid' And subcode='$sub'";
    $s=mysqli_query($con,$select);
    if($s)
    {
        if(mysqli_num_rows($s)>0)
        {?>
            <fieldset>
<table>
<?php
            while($res=mysqli_fetch_array($s))
            {
?>
 <tr>
                <td>KTU ID</td>
                <td> <input type="text" name="ktuid" value="<?php echo $res['Ktuid'];?>" readonly></td>
              </tr>
              <tr>
                <td>Subject Code</td>
                <td> <input type="text" name="subcode" value="<?php echo $res['subcode'];?>" readonly></td>
              </tr>
              <tr>
                <td>Semester</td>
                <td> <input type="text" name="sem" value="<?php echo $res['Semester'];?>" readonly></td>
              </tr>

                <tr>
                <td>Series 1</td>
                <td> <input type="text" name="series1" value="<?php echo $res['Series1'];?>"></td>
              </tr>
              </tr>
              <tr>
              <td>Series 2</td>
                <td> <input type="text" name="series2" value="<?php echo $res['Series2'];?>"></td>
              </tr>
              </tr>
              <tr>
              <td>Assignment 1</td>
                <td> <input type="text" name="assg1" value="<?php echo $res['Assignment1'];?>"></td>
              </tr>
              </tr>
              <tr>
              <td>Assignment 2</td>
                <td> <input type="text" name="assg2" value="<?php echo $res['Assignment2'];?>"></td>
              </tr>
              </tr>
              <tr>
              <td>Attendance Percentage</td>
                <td> <input type="text" name="Attendance" value="<?php echo $res['Attendance'];?>" ></td>
              </tr>

<?php
            }
            ?>

            <tr>
            <td> 
                <input type="submit" value="Update" name="update" style="margin-left:15px;" >
        </td> <td>
             <input type="reset" value="clear" style="margin-left:0px;">
            </td>
        </tr>
        </table>
</form>
</fieldset>
        <?php
        }
        else
             echo "<script>alert('Sorry, No Marks entered for the subject!!!');</script>";
    }
       else
            echo "<script>alert('Sorry, Try again');</script>";

}
?>         
</center>
</body>
</html>
<?php
if(isset($_POST['update']))
{
    $ktuid=$_POST['ktuid'];
    $sub=$_POST['subcode'];
    $sem=$_POST['sem'];
    $sr1=$_POST['series1'];
    $sr2=$_POST['series2'];
    $assg1=$_POST['assg1'];
    $assg2=$_POST['assg2'];
    $atnd=$_POST['Attendance'];
    $update="update Marks set Series1=$sr1,Series2=$sr2,Assignment1=$assg1,Assignment2=$assg2,Attendance=$atnd where Ktuid='$ktuid' and subcode='$sub'";
        $q=mysqli_query($con,$update);
        if($q)
            echo "<script>alert('Succesfully updated');</script>";
       else
            echo "<script>alert('Sorry, Try again');</script>";

}
?>  