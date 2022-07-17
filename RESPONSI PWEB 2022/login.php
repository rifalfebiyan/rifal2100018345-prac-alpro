<html>
<head>
	<title>LOGIN</title>
	<link rel="stylesheet" type="text/css" href="bukutamu.css">
</head>
<body>
    <br>
    <br>
    <br>
	<center><h2>Hanya Admin<br>Yang Bisa Mengakses</h2></center>
	<div class="login">
	<form name="form1" method="post" action="perincian.php">
            <table width="100%" border="0" align="center">
                <tr>
                    <td>Username</td>
                    <td><input name="username" type="text" id="username"></td>
                </tr>
                <tr>
                    <td>Password</td>
                    <td><input name="password" type="password" id="pasword"></td>
                </tr>
                <tr>
                    <td>&nbsp;</td>
                    <td>
                        <input type="submit" name="Submit" value="Kirim">
                        <input type="reset" name="Submit2" value="Batal">
                    </td>
                </tr>
            </table>
        </form>
	</div>
	<div align="center">
            <strong>
                <br>
                <a href="index.php" style="color: white">::Kembali Ke Beranda::</a>
            </strong>
</body>
</html>