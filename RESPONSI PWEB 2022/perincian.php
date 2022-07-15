<?php
echo "<head><title>My Guest Book</title></head>";
    $fp = fopen("guestbook.txt", "r");
    echo "<center>";
    echo "<b>TABEL GUESTBOOK</b>";
    echo "<br>";
    echo "<a href= index.php>::Kembali Ke Beranda::</a><br>";
    echo "<hr>";
    echo " <table width = 900 border=1>";
    echo "<tr>
    <center>
    <td>Tanggal</td>  
    <td>Nama Barang</td>
    <td>Penerima</td>
    <td>Pengirim</td>
    <td>Handphone</td>
    <td>Berat/Kg</td>
    <td>Total Pembayaran </td>
    <td>Alamat Tujuan</td>
    </tr>
    </center>";
    while ($isi = fgets($fp,100000))
    {
        $pisah = explode("|", $isi);
        echo "<br>";
        echo "<tr>
        <td>$pisah[0]</td>  
        <td>$pisah[1]</td>
        <td>$pisah[2]</td>
        <td>$pisah[3]</td>
        <td>$pisah[4]</td>
        <td>$pisah[5]</td>
        <td>$pisah[6]</td>
        <td>$pisah[7]</td>
        </tr>";
    }
    "</table>";
    "</center>";
?>