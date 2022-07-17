<?php
 $user = $_POST['username'];
 $pass = $_POST['password'];
 if ($user=="admin") { //USERNAME ADMIN
     if($pass=="admin") { //PASSWORD ADMIN


    echo "<head><title>TRANSAKSI PENGIRIMAN</title></head>";
    $fp = fopen("guestbook.txt", "r");
    echo "<center>";
    echo "<b>TRANSAKSI PENGIRIMAN</b>";
    echo "<br>";
    echo "<a href= index.php>::Kembali Ke Beranda::</a><br>";
    echo "<hr>";
    echo " <table width = 900 border=1>";
    echo "<tr>
    <center>
    <td>Tanggal/Jam</td>  
    <td>Nama Barang</td>
    <td>Penerima</td>
    <td>Pengirim</td>
    <td>Handphone</td>
    <td>Jarak</td>
    <td>Berat/Kg</td>
    <td>Total Pembayaran </td>
    <td>Alamat Tujuan</td>
    </tr>
    </center>";
    while ($isi = fgets($fp,100000))
    {
        $pisah = explode("|", $isi);
        echo "<tr>
        <td>$pisah[0]</td>  
        <td>$pisah[1]</td>
        <td>$pisah[2]</td>
        <td>$pisah[3]</td>
        <td>$pisah[4]</td>
        <td>$pisah[5]</td>
        <td>$pisah[6]</td>
        <td>$pisah[7]</td>
        <td>$pisah[8]</td>
        </tr>";
    }
    "</table>";
    "</center>";
}
else {
    echo "<center>";
    echo "<b>Username/Password Salah</b>";
    echo "</center>";
}
} 
?>
<head>
<style>
body{
    background: rgb(10,348,243);
    background: linear-gradient(90deg, rgba(455,055,255,1) 0%, rgba(002,157,189,1) 100%);
}

b{
    font-size: 30px;
    margin-bottom: -30px;
}

ul{
    list-style: none;
}

a{
    text-decoration: none;
    color: white;
}

table{
    border : 1px solid black;
    width: 1000px;
}

td {
    border : 1px solid black;
}

.wrapper{
    position: fixed;
    top: 0;
    left: -100%;
    height: 100%;
    width: 100%;
    background: linear-gradient(270deg, rgba(255,255,255,1) 0%, rgba(101,157,189,1) 100%);
    transition: all 0.6s ease-in-out;
}

#active:checked ~ .wrapper{
    left: 0;
}

.menu-btn{
    position: absolute;
    z-index: 2;
    right: 20px;
    left: 20px; 
    top: 20px;
    height: 50px;
    width: 50px;
    text-align: center;
    line-height: 50px;
    border-radius: 50%;
    font-size: 20px;
    cursor: pointer;
    color: #fff;
    transition: all 0.3s ease-in-out;
}

.menu-btn span, .menu-btn:before, .menu-btn:after{
    content: "";
    position: absolute;
    top: calc(50% - 1px);
    left: 30%;
    width: 40%;
    border-bottom: 2px solid #000;
    transition: transform .6s cubic-bezier(0.215, 0.61, 0.355, 1);
}

.menu-btn:before{
    transform: translateY(-8px);
}

.menu-btn:after{
    transform: translateY(8px);
}

.close {
    z-index: 1;
    width: 100%;
    height: 100%;
    pointer-events: none;
    transition: background .6s;
}

#active:checked + .menu-btn span {
    transform: scaleX(0);
}

#active:checked + .menu-btn:before {
    transform: rotate(45deg);
    border-color: #fff;
}

#active:checked + .menu-btn:after {
    transform: rotate(-45deg);
    border-color: #fff;
}

.p2{
    position: absolute;
    font-size: 30px;
    font-weight: 500;
    color: #fff;
    left: 46%;
    top: 30%;
}

.wrapper ul{
    position: absolute;
    top: 80%;
    left: 50%;
    height: 90%;
    transform: translate(-50%, -50%);
    list-style: none;
    text-align: center;
}

.wrapper ul li{
    height: 10%;
    margin: 15px 0;
}

.wrapper ul li a{
    text-decoration: none;
    font-size: 30px;
    font-weight: 500;
    padding: 5px 30px;
    color: #fff;
    border-radius: 50px;
    position: absolute;
    line-height: 50px;
    margin: 5px 30px;
    opacity: 0;
    transition: all 0.3s ease;
    transition: transform .6s cubic-bezier(0.215, 0.61, 0.355, 1);
}

.wrapper ul li a:after{
    position: absolute;
    content: "";
    background: #fff;
    width: 100%;
    height: 100%;
    left: 0;
    top: 0;
    border-radius: 50px;
    transform: scaleY(0);
    z-index: -1;
    transition: transform 0.3s ease;
}

.wrapper ul li a:hover:after{
    transform: scaleY(1);
}

.wrapper ul li a:hover{
    color: #000;
}

input[type="checkbox"]{
    display: none;
}

#active:checked ~ .wrapper ul li a{
    opacity: 1;
}

.wrapper ul li a{
    transition: opacity 1.2s, transform 1.2s cubic-bezier(0.215, 0.61, 0.355, 1);
    transform: translateX(100px);
}

#active:checked ~ .wrapper ul li a{
    transform: none;
    transition-timing-function: ease, cubic-bezier(.1,1.3,.3,1);
    transition-delay: .6s;
    transform: translateX(-100px);
}
</style>
