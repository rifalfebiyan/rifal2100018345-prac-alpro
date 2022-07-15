<!DOCTYPE html>

  <head>
    <title> Portfolio Rifal Febiyan </title>
    <link rel="stylesheet" href="style.css">
   </head>
<body>
<SCRIPT language="JavaScript">
        function hitungtotal(){
    var nama = (document.fform.inama.value);
    var tujuan = (document.fform.itujuan.value);
    var jumlahpaket = parseFloat(document.fform.ijumlah.value);
    var sub = 0.0; var diskon =0.0; var total =0.0;
    
    if (document.fform.imember.checked==true){
  tiket = 10000;
  sub = tujuan*10000;
}   else{
  tiket = 5000;;
  sub = tujuan*5000;
}
total = sub*jumlahpaket;

    document.fform.otiket.value=eval(tiket);
    document.fform.osub.value=eval(sub);
    document.fform.ototal.value=eval(total);
// gunakan untuk mengecek !!! alert (total);
}
</SCRIPT>
  <?php 
  //Fungsi Hit Counter
	function hit_count(){
    $filecounter="counter.txt"; 
    $fl=fopen($filecounter,"r+"); 
    $hit=fread($fl,filesize($filecounter)); 
  
    echo("<table width=100 align=center border=0 cellspacing=0 cellpadding=0 bordercolor=#0000FF><tr>");
    //echo("<tr bgcolor=\"#99FF66\">\n");
    echo("<td width=500 valign=middle align=center>"); 
    echo("<font face=verdana size=3 color=black><b>"); 
    echo("<img src=images/viewer.png align=center width=30 height=30 >");
    echo " : ";
    echo($hit); 
    echo("</b></font>"); 
    echo("</td>"); 
    echo("</tr></table>"); 
    fclose($fl); 
    $fl=fopen($filecounter,"w+"); 
    $hit=$hit+1; 
    fwrite($fl,$hit,strlen($hit)); 
    fclose($fl); 
    }
?>
  <header>

     <!--Menu Navigasi -->
  <nav>
    <div class="navbar">
      <div class="logo"><img src ="images/tva.png"></a></div>
      <ul class="menu">
          <li><a href="#home">Beranda</a></li>
          <li><a href="index.php ">Jasa Pengiriman</a></li>
          <li><a href="perincian.php">Cek Transaksi</a></li>
          <li><a href="#services">Cek Ongkir</a></li>
          <li><a href="#contact">Kontak</a></li>
          <li><a href="bukutamu.html">Call Center +62 8978 6432 25</a><li>
          <div class="cancel-btn">
            <i></i>
          </div>
      </ul>
      <div>
        <i></i>
        <i></i>
        <i></i>
      </div>
    </div>
    <div class="menu-btn">
      <i></i>
    </div>
  </nav>
  </header>

  <!-- Button scroll ke home -->
  <div class="scroll-button">
    <a href="#home"></i></a>
  </div>

<!-- Beranda  -->
 <section class="home" id="home">
   <div class="home-content">
     <div class="teks">
       <div class="teks-satu"><img src=""></div>
       <div class="teks-dua">TVA</div>
       <div class="teks-tiga">Time Variance Authority</div>
       <div class="teks-empat">MELAYANI PAKET ANTAR MULTIVERSE</div>
     </div>
     <div class="button">
       <button>
         <div class="teks-lima">
         <a href="#contact" style="text-decoration: none; color: whitesmoke;">Hubungi Kami</a>
        </div>
      </button>
      <div class="logoicon">
      </br>
     <a href="https://www.instagram.com/rifal_febiyan/"><img src="images/instagram.png"> </a>
        &nbsp; <a href="https://twitter.com/ifallllllll"><img src="images/twitter.png"></a>
        &nbsp; <a href=" https://www.facebook.com/rifal.febiyan"><img src="images/facebook.png"></a>
        &nbsp; <a href=" https://www.youtube.com/channel/UCuPogE_4BqChPPTm8D3INlQ"><img src="images/youtube.png"></a>
        &nbsp; <a href="https://gitlab.com/rifal2100018345/ta-pweb2022-g-2100018345-rifal-febiyan"><img src="images/gitlab.png"></a>
      </div>
     </div>
   </div>
 </section>
 
<!-- Tentang -->
<section class="about" id="about">
  <div class="content">
    <div class="title"><span>Cek Ongkir</span></div>
    <center><h2></h2></center>
	<div class="ongkir">
	<FORM NAME ="fform">
<table border="0" align="center"width="100%" height="100%" >
<tr>
<td width="100%"  colspan="2">
</tr>
<tr>
<td width="50%">
Nama   :<input type="text" placeholder="tidak wajib di isi" name="inama">
Jarak<sup><i> km/1kg</i></sup> : <input type="text" name="itujuan" placeholder="masukkan jarak">
Berat<sup><i> min.1kg</i></sup> :<input type="text"  name="ijumlah" placeholder="masukkan berat barang">
Luar Jawa : <input type="checkbox" name="imember"> Ya
</td>
<td width="100%">
Ongkir<sup><i> /km</i></sup> :<input type="text"  name="otiket">
Sub Total   :<input type="text"  name="osub">
Total Bayar :<input type="text"  name="ototal"></td>
</tr>
<tr>
<td width="100%"  colspan="2">
<center>
    <INPUT TYPE="button" value="Hitung" onclick="hitungtotal()">
    <INPUT TYPE="reset" value="Ulang">
</center></td>
</tr>
</table>
</FORM>
	</div>
	<div align="center">
    <!--
            <strong>
              <br>
                <a href="perincian.php" style="color: blue">::Lihat Transaksi Pengiriman::</a>
            </strong>
  -->
            <br>
            <?php
    hit_count();
    ?>
  </div>
</section>
<!-- akhir contact -->
    </div>
  </div>
</section>

<!-- Footer  -->
<footer>
  <div class="teks">
    <span>Created By <a href="#">Rifal Febiyan</a> | &#169; 2022</span>
  </div>
</footer>
  <script src="script.js"></script>
</body>
</html>