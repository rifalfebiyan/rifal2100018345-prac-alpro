#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
class Output{
	public : 
	void syiap(){

ofstream myfile;
	myfile.open("UTS.txt", ios::trunc);
	cout<<endl;

    if(!myfile.fail()){   
     	myfile<<"------------------------------------------------------"<<endl;
    	myfile<<"\t            Struk Chekout"<<endl;
     	myfile<<"------------------------------------------------------"<<endl;
        myfile<<"Pengirim                    : AHOY MALL SHOPPING"<<endl;
        myfile<<"Nama Penerima               : "<<user<<endl;
        myfile<<"Alamat Penerima             : "<<alamat<<endl;
        myfile<<"Nama Barang yang di pesan   : \n"<<item[i]<<"\t Jumlah : "<<jumlah[i]<<endl;
        myfile<<"\n "<<item[i+1]<<"\t Jumlah : "<<jumlah[i+1]<<endl;
        myfile<<" \n"<<item[i+2]<<"\t Jumlah : "<<jumlah[i+2]<<endl;
        myfile<<"------------------------------------------------------"<<endl;
        myfile<<"Harga      : "<<th<<endl;
        myfile<<"Pembayaran : melalui Shopeepay"<<endl;
        myfile<<"------------------------------------------------------"<<endl;
        myfile.close(); 
    	cout<<"STRUK TERCETAK"<<endl;
       }
       else{
              cout<<"File tidak ditemukan"<<endl;
       }
    
}
   private :
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
