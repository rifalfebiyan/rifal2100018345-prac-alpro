#include <iostream>
#include <string.h>
using namespace std;

class Input{
public : 
	void syiap(){
	cout << "==========================================\n";    
	cout << "--------------APLIKASI SHOPEE-------------\n";
	cout << "==========================================\n";   
   	cout << "\t      SILAHKAN LOGIN"<<endl;    
   	cout << "------------------------------------------\n\n";  
 	cout << "Username : "; cin >> username;        
 	cout << "Password : "; cin >> password;        
    	if (username ==user && password == pass) {            
        	cout << "\n--------------------\n";            
        	cout << "Anda Berhasil Login" << endl;            
        	cout << "--------------------\n\n";            
        	i=4;            
        	login=1;        } 
    	else {            
           cout << "\n------------------------\n";            
           cout << "Maaf ID & PASSWORD Salah!" << endl;                         
		   cout << "-------------------------\n\n";            
           i = i +1;      
       	}
	cout<<"==========================================\n"; 
	cout<<"Isi Saldo ShopeePay Anda: Rp."<<saldo;
	cout<<endl;
	cout<<"==========================================\n"; 
	cout<<endl<<endl;
	cout<<"==========================================\n";
	cout<<"------- TOSERBA Official Shop v ----------\n";
	cout<<"==========================================\n\n"; 
	cout<<"DAFTAR PRODUK\n";
	cout<<"============================\n";
	cout<<"  1. Mechanical Keyboard\n";
	cout<<"     Rp. 700.000\n";
	cout<<"============================\n";
	cout<<"  2. Logitech G Pro Wireless\n";
	cout<<"     Rp. 1.200.000\n";
	cout<<"============================\n";
	cout<<"  3. Mousepad\n";
	cout<<"     Rp. 70.000\n";
	cout<<"============================\n";
	i=0;
	do{
		cout<<"\nPilih Barang: ";cin>>pilihan;
	  	if(pilihan == 1){
	  		cout<<"==================================================\n";
			item[i]="Mechanical Keyboard";
		    cout<<"Harga                               : Rp. 700.000\n";
		    cout<<"Masukkan Jumlah Barang di Keranjang : ";cin>>jumlah[i];
		    cout<<"==================================================\n";
		    total=jumlah[i]*700000;
		    total_hrg+=total;
		}
	  	else if(pilihan==2){
	  		cout<<"==================================================\n";
		    item[i]="Logitech G Pro Wireless";
		    cout<<"Harga                               : Rp. 1.200.000\n";
		    cout<<"Masukkan Jumlah Barang di Keranjang : ";cin>>jumlah[i];
		    cout<<"==================================================\n";
		    total=jumlah[i]*1200000;
		    total_hrg+=total;
		}
	  	else if(pilihan==3){
	  		cout<<"==================================================\n";
		    item[i]="Mousepad";
		    cout<<"Harga                               : Rp. 70.000\n";
		    cout<<"Masukkan Jumlah Barang di Keranjang : ";cin>>jumlah[i];
		    cout<<"==================================================\n";
		    total=jumlah[i]*70000;
		    total_hrg+=total;
	  	}
	  	total=0;
	  	cout<<"\nApakah ingin membeli lagi?(y/t)     : ";cin>>pil;
	    i++;
	}
	while(pil=='y');
	cout<<"==================================================\n";
	cout<<"TOTAL HARGA                         : "<< total_hrg <<endl;
	cout<<"Masukkan alamat lengkap anda        : ";
	cin.ignore();
	cin.getline(address[i],999);
	cout<<"==================================================\n";
	cout<<endl;
	cout<<"Apakah berada di pulau jawa ?   "<<endl;
	cout<<  "1. Ya, saya berada di pulau jawa\n";
	cout<<  "2. TIdak, saya tidak berada di pulau jawa\n";
	cout<<"Pilihan : ";cin>>alamat;
	cout<<endl;
	cout<<"==================================================\n";
	if(alamat==1){
	    ongkir=20000;
	    cout<<"Ongkir  : Rp 20.000\n";
	}
	else if(alamat!=1){
	    ongkir=50000;
	    cout<<"Ongkir  : Rp 50.000\n";
	}
	cout<<"==================================================\n";
	cout<<endl<<endl;
	cout<<"==================================================\n";
	cout<<"Pilih Jenis Ekspedisi Pengiriman\n";
	cout<<"1. JNE\n";
	cout<<"2. J&T\n";
	cout<<"3. SiCepat\n";
	cout<<"Masukkan Pilihan Ekspedisi Pengiriman : ";cin>>ekspedisi;
	switch(ekspedisi){
		case 1 :
			jasa = "JNE"; 
			cout<<"Anda memilih ekspedisi : "<<jasa<<endl;
			break;
		case 2:
			jasa = "J&T"; 
			cout<<"Anda memilih ekspedisi : "<<jasa<<endl;
			break;
		case 3 :
			jasa = "Sicepat"; 
			cout<<"Anda memilih ekspedisi : "<<jasa<<endl;
			break;	
	}
}

 
private :
	char address[999][999];
	int saldo = 5000000;
	string item[999];
	int jumlah[999];
	string username, jasa;    
	int password, alamat;    
	int i; 
	string user ="faiz";    
	int pass = 12345;    
	int login=0; 
	int pilihan;
	char pil;
	int total,total_hrg;
	string proteksi;
	int ekspedisi,ongkir,total_ongkir;
	int voucher=5000;
	   	

};
