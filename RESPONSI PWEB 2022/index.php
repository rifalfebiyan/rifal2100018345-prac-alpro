<!DOCTYPE html>

  <head>
    <title> Portfolio Rifal Febiyan </title>
    <link rel="stylesheet" href="style.css">
   </head>
<body>
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
          <li><a href="#about">Jasa Pengiriman</a></li>
          <li><a href="perincian.php">Cek Transaksi</a></li>
          <li><a href="cekongkir.php">Cek Ongkir</a></li>
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
    <div class="title"><span>JASA PENGIRIMAN PAKET</span></div>
    <center><h2></h2></center>
	<div class="login">
	<form name="form1" method="post" action="lihat.php">
            <table width="100%" border="0" align="center">
                <tr>
                    <td>Nama Paket</td>
                    <td><input name="nama" type="text" id="nama" placeholder="masukkan nama barang"></td>
                </tr>
                <tr>
                    <td>Nama Penerima<td>
                    <input name="penerima" type="text" id="penerima" placeholder="masukkan nama penerima"></td>
                </tr>
                <tr>
                    <td>Nama Pengirim<td>
                    <input name="pengirim" type="text" id="pengirim" placeholder="masukkan nama pengirim"></td>
                </tr>
                <tr>
                    <td>No.Handphone</td>
                    <td><input name="hp" type="text" id="hp"placeholder="masukkan nomor handphone"></td> </tr>
                </tr>
                <tr>
                    <td>Jarak <sup><i> km/1kg</i></sup></td>
                    <td><input name="jarak" type="text" id="jarak" placeholder="masukkan jarak"></td>
                </tr>
                <tr>
                    <td>Berat <sup><i> min.1kg</i></sup></td>
                    <td><input name="jumlah" type="text" id="jumlah" placeholder="masukkan berat"></td>
                </tr>
                <tr>
                    <td>Luar Jawa</td>
                    <td><input name="luar" type="checkbox" id="luar"><sup>10K/Km</sup></td>
                </tr>
                <tr>
                    <td>Alamat</td>
                    <td>
                        <textarea name="alamat" id="alamat" placeholder="masukkan alamat yang dituju"></textarea>
                    </td> 
                </tr>
                <tr>
                    <td>&nbsp;</td>
                    <td>
                        <input onclick=validasi(this.data) type="submit" name="Submit" value="Kirim">
                        <input type="reset" name="Submit2" value="Batal">
                    </td>
                </tr>
            </table>
        </form>
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

<

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
