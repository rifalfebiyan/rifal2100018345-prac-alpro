<?php
       $tgl = date('Y-m-d');
       $nama =  $_POST['nama'];
       $penerima = $_POST['penerima'];
       $pengirim =$_POST['pengirim'];
       $hp = $_POST['hp'];
       $jarak = $_POST['jarak'];
       $jumlah = $_POST['jumlah'];
       $alamat = $_POST['alamat'];
       $luar =$_POST['luar'];
       
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
       echo "TERIMA KASIH TELAH MENGGUNAKAN JASA KAMI";
       echo "<a href = index.php>Kembali Ke Beranda</a>"
?>