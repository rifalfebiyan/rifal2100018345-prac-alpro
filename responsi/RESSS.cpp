#include <iostream>
#include <fstream>
using namespace std;
class ahoy{
	friend ostream& operator<<(ostream&, ahoy&);
	friend istream& operator>>(istream&, ahoy&);
	public: 
	void input(){
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
	cout<<"------- AHOY MALL  SHOPPING ----------\n";
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
	cout<<"Total Item Pesanan : ";cin>>choice;
	cout<<"==================================================\n";
	cout<<"TOTAL HARGA                         : "<< total_hrg <<endl;
	cout<<"Masukkan Alamat Kota Anda           : ";
	cin>>address;
	cout<<"==================================================\n";
	cout<<endl;
	cout<<"Apakah berada di pulau jawa ?   "<<endl;
	cout<<  "1. Ya, saya berada di pulau jawa\n";
	cout<<  "2. Tidak, saya tidak berada di pulau jawa\n";
	cout<<"Pilihan : ";cin>>pil_alamat;
	cout<<endl;
	cout<<"==================================================\n";
	if(pil_alamat==1){
	    ongkir=10000;
	    cout<<"Ongkir  : Rp 10.000\n";
	}
	else if(pil_alamat!=1){
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
 void proses(){
	cout<<"==================================================\n";
	  cout<<"Gunakan Voucher Diskon Toko : Rp 10.000\n";
	  cout<<"==================================================\n";
	  voucher=10000;
	  total2=total_hrg-voucher;
	  cout<<"Biaya Proteksi?[y/t]   : ";
	  cin>>proteksi;
	  if(proteksi=="y"){
	    total2+=5000;
	    cout<<"Biaya Proteksi (Rp 5.000)"<<endl;
	  }
	  cout<<"==================================================\n";
	  cout<<"Voucher Gratis Ongkir (Min. Blj Rp 50.000)\n";
	  if (total2>=50000){
	    total_ongkir=ongkir-40000;
	    diskon=40000;
	    cout<<"Voucher Ongkir (Rp.40.000)\n";
	  }
	  else if (total2<=50000){
	    total_ongkir=ongkir;
	    cout<<"Minimal Belanja Belum Mencukupi\n";
	  }
	  total_semua=total2+total_ongkir;
	  cout<<"==================================================\n";
	  cout<<endl<<endl;
	  cout<<"==================================================\n";
	  cout<<"TOTAL HARGA               : "<<total_semua<<endl;
	  cout<<"==================================================\n";
	
	  total_saldo=saldo-total_semua;
	  cout<<"Sisa Saldo Shopeepay anda : "<<total_saldo<<endl;
	  cout<<"==================================================\n";
	  i=0;
}
 void output(){
ofstream myfile;
	myfile.open("UTS.txt", ios::trunc);
	cout<<endl;

    if(!myfile.fail()){   
     	myfile<<"=============================================================================="<<endl;
    	myfile<<"\t                                  SHOPEE                                    "<<endl;
     	myfile<<"=============================================================================="<<endl;
     	myfile<<"Nota Pesanan:                                         "<<endl;
     	myfile<<"Nama Pembeli                : "<<   username <<" \t\t "<<"  Nama Penjual : AHOY MALL SHOPPING" <<endl;
        myfile<<"Alamat Pembeli              : "<<address<<endl;
        myfile<<"Ekspedisi                   : "<<jasa<<endl;
        myfile<<"Rincian Pesanan              "<<endl<<endl;
        myfile<<"------------------------------------------------------------------------------"<<endl;
        myfile<<"------------------------------------------------------------------------------"<<endl;
        		for(i=0;i<choice;i++){
        			myfile<<"Produk    : "<<item[i]<<endl;
					myfile<<"Jumlah    : "<<jumlah[i]<<endl;
        		}
        myfile<<"------------------------------------------------------------------------------"<<endl;
        myfile<<"------------------------------------------------------------------------------"<<endl;
        myfile<<"\t\t\t\t\t\t Subtotal                  : "<<total_semua<<endl;
        myfile<<"\t\t\t\t\t\t Subtotal Ongkir           : "<<ongkir<<endl;
        myfile<<"\t\t\t\t\t\t Diskon Ongkir             : -"<<diskon<<endl;
        myfile<<"\t\t\t\t\t\t Pembayaran                : Via ShopeePay"<<endl;
        myfile<<"\t\t\t\t\t\t Sisa saldo shopeepay anda : "<<total_saldo<<endl;
        myfile<<"=============================================================================="<<endl;
        myfile.close(); 
    	cout<<"STRUK TERCETAK"<<endl;
       }
       else{
              cout<<"File tidak ditemukan"<<endl;
       }
    
 }	
 private:
 	string address;
	int saldo=5000000;
		string item[1000];
		int jumlah[1000];
		string username;    
	   	int password;    
	   	int i; 
	   	string user ="faiz";    
	   	int pass = 12345;    
	   	int login=0; 
	   	int pilihan;
	   	char pil;
	   	int total,total_hrg;
	   	string alamat,proteksi;
	   	int ekspedisi,ongkir,total_ongkir;
	   	int voucher;
	   	int total2,total_semua,total_saldo;
	   	int pil_alamat;
	   	string jasa;
	   	int choice;
		int diskon;   	
 
};

int main(){
	ahoy shop;
	shop.input();
	shop.proses();
	shop.output();
}
