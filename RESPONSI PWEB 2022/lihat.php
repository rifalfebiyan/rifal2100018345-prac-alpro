<style>
    body{
       background: url('images/star.jpg');
        height: 100vh;
        display: flex;
        flex-direction: column;
        justify-content: center;
        align-items: center;
    }
    ul{
        list-style: none;
    }
    a{
        text-decoration: none;
        color: #000;
    }
    .container{
        border-radius: 5px;
        background-color: #f2f2f2;
        margin-left: 240px;
        margin-right: 240px;
        padding: 20px;
    }
    @import url("https://fonts.googleapis.com/css?family=Montserrat&display=swap");

    h1 {
        font-family: "Montserrat Medium";
        color: #f2f2f2;
        max-width: 40ch;
        text-align: center;
        transform: scale(0.94);
        animation: scale 3s forwards cubic-bezier(0.5, 1, 0.89, 1);
    }
    @keyframes scale {
        100% {
            transform: scale(1);
        }
    }

    span {
        display: inline-block;
        opacity: 0;
        filter: blur(4px);
    }

    span:nth-child(1) {
        animation: fade-in 0.8s 0.1s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(2) {
        animation: fade-in 0.8s 0.2s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(3) {
        animation: fade-in 0.8s 0.3s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(4) {
        animation: fade-in 0.8s 0.4s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(5) {
        animation: fade-in 0.8s 0.5s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(6) {
        animation: fade-in 0.8s 0.6s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(7) {
        animation: fade-in 0.8s 0.7s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(8) {
        animation: fade-in 0.8s 0.8s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(9) {
        animation: fade-in 0.8s 0.9s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(10) {
        animation: fade-in 0.8s 1s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(11) {
        animation: fade-in 0.8s 1.1s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(12) {
        animation: fade-in 0.8s 1.2s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(13) {
        animation: fade-in 0.8s 1.3s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(14) {
        animation: fade-in 0.8s 1.4s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(15) {
        animation: fade-in 0.8s 1.5s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(16) {
        animation: fade-in 0.8s 1.6s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(17) {
        animation: fade-in 0.8s 1.7s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    span:nth-child(18) {
        animation: fade-in 0.8s 1.8s forwards cubic-bezier(0.11, 0, 0.5, 0);
    }

    @keyframes fade-in {
        100% {
            opacity: 1;
            filter: blur(0);
        }
    }

    .wrapper{
        position: fixed;
        top: 0;
        left: -100%;
        height: 100%;
        width: 100%;
        background: linear-gradient(90deg, rgba(255,255,255,1) 1%, rgba(101,157,189,1) 100%);
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
        border-bottom: 2px solid #fff;
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
        border-color: #000;
    }

    #active:checked + .menu-btn:after {
        transform: rotate(-45deg);
        border-color: #000;
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
        
    .content{
        position: absolute;
        top: 50%;
        left: 50%;
        transform: translate(-50%, -50%);
        z-index: -1;
        text-align: center;
        width: 100%;
        color: #202020;
    }
        
    .content .title{
        font-size: 40px;
        font-weight: 700;
    }

    .content p{
        font-size: 35px;
        font-weight: 600;
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
    a{
       color: orange;
       text-decoration:none;
    }
</style>
<?php
       date_default_timezone_set('Asia/Jakarta');
       $tgl = date('Y-m-d H:i:s');
       $nama =  $_POST['nama'];
       $penerima = $_POST['penerima'];
       $pengirim =$_POST['pengirim'];
       $hp = $_POST['hp'];
       $jarak = $_POST['jarak'];
       $jumlah = $_POST['jumlah'];
       $alamat = $_POST['alamat'];
       $luar =$_POST;
       
       if($luar == true){
              $total = $jarak*10000;
              $subtotal = $total * $jumlah;
       }
       else{
              $total = $jarak*5000;
              $subtotal = $total * $jumlah;
       }
      
       echo "<head><title>Tabel Pengiriman</title></head>";
       $fp  = fopen("guestbook.txt", "a+");
       fputs($fp,"$tgl|$nama|$penerima|$pengirim|$hp|$jumlah|$subtotal|$alamat\n");    
       fclose($fp);
    echo "<p align='center'>
            <img src='images/tva900.png' height='180'>
            </p>";
    echo "<br><br>";
    echo "<h1>";
    echo "<span>TERIMA</span>
          <span>KASIH</span>
          <span>TELAH</span> 
          <span>MENGGUNAKAN</span>
          <span>JASA</span>
          <span>KAMI</span>
          <br>
          <span><a href = index.php >Kembali Ke Beranda</a></span>";
          
    echo "</h1>";
?>