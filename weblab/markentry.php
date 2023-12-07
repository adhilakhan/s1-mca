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
$sel="select*from student";
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
     </td>
            </tr>
            <tr>
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
             </select>
             <tr>
                <td>
                    <select name="sem" >
                    <option value="Null">Select Semester</option>
                            <option value="1">1</option>
                            <option value="2">2</option>
                            <option value="3">3</option>
                            <option value="4">4</option>
                    </select>

                </td>
             </tr>
              <tr>
                <td> <input type="text" name="series1" Placeholder="Mark Of Series Test 1"></td>
              </tr>
              </tr>
              <tr>
                <td> <input type="text" name="series2" Placeholder="Mark Of Series Test 2"></td>
              </tr>
              </tr>
              <tr>
                <td> <input type="text" name="assg1" Placeholder="Mark Of Assignment 1"></td>
              </tr>
              </tr>
              <tr>
                <td> <input type="text" name="assg2" Placeholder="Mark Of Assignment 2"></td>
              </tr>
              </tr>
              <tr>
                <td> <input type="text" name="Attendance" Placeholder="Percentage Of Attendance" ></td>
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
 if(isset($_POST['sub']))
 {
    $ktuid=$_POST['ktu'];
    $sub=$_POST['Subject'];
    $sem=$_POST['sem'];
    $sr1=$_POST['series1'];
    $sr2=$_POST['series2'];
    $assg1=$_POST['assg1'];
    $assg2=$_POST['assg2'];
    $atnd=$_POST['Attendance'];
    $insert="INSERT INTO Marks(Ktuid,subcode,Semester,Series1,Series2,Assignment1,Assignment2,Attendance) Values('$ktuid','$sub',$sem,$sr1,$sr2,$assg1,$assg2,$atnd)";
        $q=mysqli_query($con,$insert);
        if($q)
            echo "<script>alert('Succesfully Registered');</script>";
       else
            echo "<script>alert('Sorry, Try again');</script>";

 }
?>  