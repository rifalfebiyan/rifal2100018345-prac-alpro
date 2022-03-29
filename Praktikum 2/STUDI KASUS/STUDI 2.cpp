#include <iostream> // header fuction untuk cin,cout,endl
#include <string.h> // header fuction untuk strcpy dan strcmp
using namespace std;

main(){ //main sebagai fungsi utama
	int pil,harga,subtotal,jumlah,total2,bayar,kembalian,diskon,subtotal1; //variabel tipe data int
	char nomor[5],menu[30],jarak[5],ulang; //variabel tipe data char
	start: //untuk perulangan ke awal
	system("cls"); //membersihkan tampilan
	cout<<"             MENU PILIHAN          "<<endl; //output menampilkan 
	cout<<" -----------------------------------"<<endl; //output menampilkan -------------
	cout<<" MENU MAKANAN : "<<endl; //output menampilkan menu 
	cout<<" 1. AYAM GEPREK Rp21.000 "<<endl; //output menampikan pilihan menu
	cout<<" 2. AYAM GORENG Rp17.000"<<endl;
	cout<<" 3. UDANG GORENG Rp19.000"<<endl;
	cout<<" 4. CUMI GORENG Rp20.500"<<endl;
	cout<<" 5. AYAM BAKAR Rp25.550"<<endl;
	cout<<" PILIHAN MENU : ";cin>>nomor; //output input
	cout<<" JUMLAH : ";
	cin>>pil;
	
	// mementukan pilihan dengan perulanngan
	if (strcmp(nomor,"1")==0) { // srtcmp digunakan untuk membandingkan 2 string
		strcpy(menu,"AYAM GEPREK"); //strcpy untuk menyalin data string mengeluarkan 
		harga=21000;
	}
	else if (strcmp(nomor,"2")==0) { // srtcmp digunakan untuk membandingkan 2 string
		strcpy(menu,"AYAM GORENG"); //strcpy untuk menyalin data string
		harga=17000;
	}
	else if (strcmp(nomor,"3")==0) { // srtcmp digunakan untuk membandingkan 2 string
		strcpy(menu,"UDANG GORENG");
		harga=19000;
	}
	else if (strcmp(nomor,"4")==0) { // srtcmp digunakan untuk membandingkan 2 string
		strcpy(menu,"CUMI GORENG Rp20.000"); //strcpy untuk menyalin data string
		harga=20000;
	}
	else {
		strcpy(menu,"AYAM BAKAR"); //strcpy untuk menyalin data string
		harga=25000;
	}
	system("cls"); //membersihkan tampilan dan membuat tampilan baru
	cout<<" Item      : "<<menu<<endl; // output item
	cout<<" Harga 1pcs: "<<harga<<endl; // output harga 1pcs
	jumlah=pil*harga;
	cout<<" Jumlah    : "<<jumlah<<endl; //output jumlah
	
	cout<<" Lokasi jarak lebih dari 3KM? Ya(1) & Tidak(2)";
	cin>>jarak;
	if (strcmp(jarak,"1")==0) { 
		strcpy(menu,"");
		subtotal=15000;}
	else {
		strcpy(menu,"2"); 
		subtotal=25000;
	}
	//subtotal=harga ongkir
	cout<<" Biaya Ongkir : "<<subtotal<<endl; //output subtotal

	int disong;
	if ((jumlah>=25000) && (jumlah<50000)){
	        disong=3000;
	        subtotal1=jumlah + subtotal;
	        total2=subtotal1-disong;
	        cout<<endl<<"selamat anda mendapatkan diskon 3000"<<endl;
	        
	    } else if ((jumlah>=500000) && (jumlah<150000)){
	        diskon=jumlah*(15/100);
	        disong=subtotal-5000;
	        subtotal1=jumlah + subtotal;
	        total2=subtotal1-diskon-disong;
	        cout<<endl<<"selamat anda mendapatkan diskon "<<endl;
	        
	    } else if (jumlah>=150000){
	        diskon=jumlah*(35/100);
	        disong=subtotal-8000;
	        subtotal1=jumlah + subtotal;
	        total2=subtotal1-diskon-disong;
	        cout<<endl<<"selamat anda mendapatkan diskon "<<endl;

	    }else{
	    	diskon=0;
		}
	cout<<" Diskon           : "<<diskon<<endl; //output diskon
	cout<<" Diskon Ongkir    : "<<disong<<endl;
	cout<<" ----------------------------------"<<endl;
	cout<<" Total Pembayaran : "<<total2<<endl; //output total pembayaran
	cout<<" Tunai            : ";cin>>bayar; //input tunai
	kembalian=bayar-total2; // pengurangan kembalian
	cout<<" Kembalian        : "<<kembalian<<endl; //output kembalian
	cout<<" -----------------------------------"<<endl;
	cout<<"        Mau Pesan Lagi? (Y/T) : ";cin>>ulang; //
	if (ulang=='Y'||ulang=='y')
	goto start; // jika program sesuai program akan mengulang ke start
	else
	goto end; //jika program tidak sesuai maka program akan berhenti
	end:;
}

