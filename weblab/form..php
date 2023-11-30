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
<body>
    
    <center>
        <fieldset >
        <marquee behavior="scroll" direction="right" onmouseover="this.stop()" onmouseout="this.start()"><h1>WELCOME TO FRESHERS WORLD</h1></marquee>

        <center> <form action="review.php" method="POST" >
<table >
    <tr>
        <th colspan="3"> Registration form </th>
    </tr>
    <tr>
        <td>Name</td>
        <td colspan="2"> <input type="text" maxlength="25" name="name"></td>
    </tr>
    <tr>
        <td>Age</td>
        <td colspan="2">
            <select name="age" id="" >
                <option value="NULL" >-----Select-----</option>
                <?php
                for($i=20;$i<=40;$i++)
                {
                  
                   echo "<option value=". $i.">". $i."</option>";
                }
                ?>

            </select>
        </td>
    </tr>
    <tr>
        <td>Password</td>
        <td colspan="2"><input type="password" name="pswd" maxlength="8"  ></td>
    </tr>
    <tr>
        <td> Re-Enter password</td>
        <td colspan="2"><input type="password" name="rpswd" maxlength="8" ></td>
    </tr>
    <tr>
        <td rowspan="4">Select your security question</td>
        <td colspan="2"><input type="radio" value="What is your pet name ?" name="securtiy">What is your pet name ?</td>
    </tr>
    <tr>
        <td colspan="2"><input type="radio" value="Who is your best friend ?" name="securtiy">Who is your best friend ?</td>
    </tr>
    <tr>
        <td colspan="2"><input type="radio" value="What is your favourite color?" name="securtiy">What is your favourite color?</td>
    </tr>
    <tr>
        <td colspan="2"><input type="radio" value="Who is your favourite teacher ?1" name="securtiy">Who is your favourite teacher ?</td>
    </tr>
    <tr>
        <td>Answer of the security question </td>
        <td colspan="2"> <input type="text" name="qa"></td>
    </tr>
    <tr>
        <td>Email-id</td>
        <td colspan="2"><input type="email" name="email"></td>
    </tr>
    <tr> 
        <td>Languages Known</td>
        <td colspan="2"><input type="checkbox" value="Malayalam" name="lang[]">Malayalam
            <input type="checkbox" value="Hindi" name="lang[]" >Hindi
            <input type="checkbox" value="English" name="lang[]" >English</td>
    </tr>
    <tr >
        <td rowspan="2">Contact number</td>
        <th>Home</th>
        <th>Office</th>
    </tr>
    <tr>
        <td><input type="text" maxlength="10" pattern="[0-9]{10}" name="home"></td>
        <td><input type="text" maxlength="10" pattern="[0-9]{10}" name="off"></td>
    </tr>
    <tr>
        <td>Upload CV</td>
        <td colspan="2"><input type="file" name="cv"></td>
    </tr>
    <tr>
        <td colspan="3" align="center" >
            <input type="submit" name="submit" value="Submit" style="margin:10px;">
            <input type="reset" name="reset" value="Clear" style="margin:10px;" >
        </td>
    </tr>
</table>
</form></center>
</fieldset>
    </center>
</body>
</html>
