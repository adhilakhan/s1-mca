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
        margin-left: 250px;
        margin-right: 250px;
        padding: 50px;
    }
    td,th{
        align-items: center;
        padding: 3px;
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
        <form action="student.php" method="post">
            <h2>Studet Details</h2>
        <table>
            <tr>
                <th>
                    Roll No.
                </th>
                <td>
                    <input type="text" name="roll">
                </td>
            </tr>
            <tr>
                <th>
                    Name
                </th>
                <td>
                    <input type="text" name="name">
                </td>
            </tr>
            <tr>
                <th>
                    Marks
                </th>
                <td>
                    <input type="text" name="marks">
                </td>
            </tr>
            <tr>
                <td colspan="2"> 
                    <input type="submit" value="submit" name="sub">
            &nbsp;&nbsp;
            &nbsp;&nbsp;&nbsp;
                 <input type="reset" value="clear" style="margin-left:0px;">
                </td>
            </tr>
        </table>
    </form>
    </fieldset>
 
<?php
include('connection.php');
if(isset($_POST['sub']))
{
$nm=$_POST['name'];
$roll=$_POST['roll'];
$mrk=$_POST['marks'];
$sq = "insert into Stud values ($roll,'$nm',$mrk)";
$p = mysqli_query($con,$sq);
  if($p)
  {
    echo "<script>alert('One row inserted ');</script>";
  } 
  else
   echo "<script>alert('Sorry Insertion Not Posssible Primary key constraint violation try again ');</script>";
}

    ?>
    <br><br>
    <fieldset>
<form action="" method="post">
    <input type="search" name="search" Placeholder="Search By rollno"> 
</form><br>
<form action="" method="post">
    <input type="Submit" name="v" value="View All" style="padding:3px;"  >
</form>
<?php
 if(isset($_POST['search']))
 {
  $r=$_POST['search'];
  $sel="select*from Stud where Rollno=$r";
$ss=mysqli_query($con,$sel);
if($ss)
{
    if(mysqli_num_rows($ss)>0)
    {?>
    <br><br>
    <table>
    <tr>
            <th>
                Roll No
            </th>
            <th>
                Name
            </th>
            <th>
                Mark
            </th>
</tr>
    <?php
     
        while($res=mysqli_fetch_array($ss))
        {  ?>
            <tr>
            <td><input type="text" disabled value="<?php echo $res['Rollno'];?>">
            <td><input type="text" disabled value="<?php echo $res['Name'];?>">
            <td><input type="text" disabled value="<?php echo $res['Mark'];?>">
            </tr>
            <?php
         }
       
        
    }
    else
     echo "<script>alert('NO RECORD FOUND ');</script>";
 }

}
?>
 </table>
<?php
if(isset($_POST['v']))
{
 $select="select*from Stud";
$s=mysqli_query($con,$select);
if($s)
{
?>
<br><br>
    <table >
        <tr>
            <th>
                Roll No
            </th>
            <th>
                Name
            </th>
            <th>
                Mark
            </th>
</tr>
    <?php
    if(mysqli_num_rows($s)>0)
    {
     
        while($result=mysqli_fetch_array($s))
        {
            ?>
        <tr>
        <td><input type="text" disabled value="<?php echo $result['Rollno'];?>">
        <td><input type="text" disabled value="<?php echo $result['Name'];?>">
        <td><input type="text" disabled value="<?php echo $result['Mark'];?>">
        </tr>
       <?php     
        }
    }
}
}
?>
</table>
</fieldset>
   </center>
</body>
</html>