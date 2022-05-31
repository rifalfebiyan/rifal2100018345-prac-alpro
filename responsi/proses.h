#include <iostream>
#include <string.h>
using namespace std;

class Proses{
public : 
	void syiap(){
	  cout<<"==================================================\n";
	  cout<<"Gunakan voucher diskon toko : Rp 5.000\n";
	  cout<<"==================================================\n";
	  total2=total_hrg-voucher;
	  cout<<"Penambahan Proteksi?[y/t]   : ";
	  cin>>proteksi;
	  if(proteksi=="y"){
	    total2+=3000;
	  }
	  cout<<"==================================================\n";
	  cout<<"Voucher Gratis Ongkir (Min. Blj Rp 30.000)\n";
	  if (total2>=30000){
	    total_ongkir=ongkir-20000;
	    cout<<"Voucher digunakan\n";
	  }
	  else if (total2<=30000){
	    total_ongkir=ongkir;
	    cout<<"Minimal Belanja Belum Mencukupi\n";
	  }
	  th=total2+total_ongkir;
	  cout<<"==================================================\n";
	  cout<<endl<<endl;
	  cout<<"==================================================\n";
	  cout<<"TOTAL HARGA               : "<<th<<endl;
	  cout<<"==================================================\n";
	
	  total_saldo=saldo-th;
	  cout<<"Sisa saldo shopeepay anda : "<<total_saldo<<endl;
	  cout<<"==================================================\n";
	  i=0;
}
private:
	int saldo=1000000;
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
	   	int voucher=5000;
	   	int total2,th,total_saldo;
};
