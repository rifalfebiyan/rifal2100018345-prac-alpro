// Sticky menu navigasi samping
let nav = document.querySelector("nav");
let scrollBtn = document.querySelector(".scroll-button a");
console.log(scrollBtn);
let val;
window.onscroll = function() {
  if(document.documentElement.scrollTop > 20){
    nav.classList.add("sticky");
    scrollBtn.style.display = "block";
  }else{
    nav.classList.remove("sticky");
    scrollBtn.style.display = "none";
  }

}

// Menu navigasi samping
let body = document.querySelector("body");
let navBar = document.querySelector(".navbar");
let menuBtn = document.querySelector(".menu-btn");
let cancelBtn = document.querySelector(".cancel-btn");
menuBtn.onclick = function(){
  navBar.classList.add("active");
  menuBtn.style.opacity = "0";
  menuBtn.style.pointerEvents = "none";
  body.style.overflow = "hidden";
  scrollBtn.style.pointerEvents = "none";
}
cancelBtn.onclick = function(){
  navBar.classList.remove("active");
  menuBtn.style.opacity = "1";
  menuBtn.style.pointerEvents = "auto";
  body.style.overflow = "auto";
  scrollBtn.style.pointerEvents = "auto";
}

// Bilah navigasi samping ditutup ketika mengklik tautan navigasi
let navLinks = document.querySelectorAll(".menu li a");
for (var i = 0; i < navLinks.length; i++) {
  navLinks[i].addEventListener("click" , 
  function() {
    navBar.classList.remove("active");
    menuBtn.style.opacity = "1";
    menuBtn.style.pointerEvents = "auto";
  });
}

// Outputan form
function alertx(data){
  var nama=(document.data.nama.value);
  var email =(document.data.email.value);
  var handphone = (document.data.handphone.value);
  var sosmed = (document.data.sosmed.value);
  var pesan =(document.data.pesan.value);

{
  if(document.data.nama.value === false || document.data.email.value == false ){
  alert (" Nama atau Email anda belum terisi dengan benar , CEK KEMBALI !!! ");
  }
  else
  {
  alert("Selamat Datang Di \n halaman Web saya");
  alert ("Nama : " + nama + "\nEmail : " + email + "\nHandphone : " + handphone + "\nSosial Media : " + sosmed + " \nPesan : " + pesan );
  alert("Terimakasih telah mengunjungi alamat web kami");
}
}
}
