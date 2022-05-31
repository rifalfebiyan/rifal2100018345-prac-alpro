#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class ahoy{
	public:
	void input(){
	cout<<"Masukan banyak data = ";
cin>>n;
for(i=0;i<n;i++){
      cout<<endl;
      cout<<"Data ke-"<<(i+1)<<":"<<endl;
      cout<<"Input Kode Barang : ";cin>>barang[i].kode;
      cout<<"Input Nama Barang: ";cin>>(barang[i].nama);
      cout<<"Input Stock Barang : ";cin>>barang[i].stock;
      cout<<"Input Lokasi Barang : ";cin>>(barang[i].lokasi);
      cout<<endl;
      }
      
	}
 	
 	void proses(){
 		 for(i=0;i<n;i++){
             for(b=0;b<n-1;b++){
                if(barang[b].kode > barang[b+1].kode){
                     temp.kode = barang[b].kode;
                     barang[b].kode = barang[b+1].kode;
                     barang[b+1].kode = temp.kode;
                     strcpy(temp.nama, barang[b].nama);
                     strcpy(barang[b].nama, barang[b+1].nama);
                     strcpy(barang[b+1].nama, temp.nama);
                     temp.stock = barang[b].stock;
                     barang[b].stock = barang[b+1].stock;
                     barang[b+1].stock = temp.stock;
                     strcpy(temp.lokasi, barang[b].lokasi);
                     strcpy(barang[b].lokasi, barang[b+1].lokasi);
                     strcpy(barang[b+1].lokasi, temp.lokasi);
                     }
                  }
               }
               cout<<endl;
        cout<<endl;
	 }

	 void output(){
	 cout<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;
        cout<<"===================================================================="<<endl;
        cout<<"|  Kode Barang  |  Nama Barang  |  Stock Barang  |  Lokasi Barang  |"<<endl;
        cout<<"===================================================================="<<endl;
                for(b=0;b<n;b++){
        cout<<"|      "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t"<<barang[b].lokasi<<"       |"<<endl;
                     }
        cout<<"===================================================================="<<endl;
        cout<<endl;
        cout<<"Masukan Kode Barang Untuk Mencari : ";
        cin>>cari;
        ada = 0;
        for(b=0;b<n;b++)
            {
            if(barang[b].kode==cari)
                {
                    ada=1;
                    cout<<"==================================================================================="<<endl;
                    cout<<"|      Kode Barang     |       Nama Barang    |       Stok      |       Lokasi     |"<<endl;
                    cout<<"==================================================================================="<<endl;
                    cout<<"|         "<<barang[b].kode<<"\t\t        "<<barang[b].nama<<"\t\t       "<<barang[b].stock<<"\t        "<<barang[b].lokasi<<"      |"<<endl;
                }
            }
        if (ada == 0)

            {
                cout<<"Data Tidak ditemukan"<<endl;
            }
	 }
	 private:
	typedef struct{

	int kode;
	char nama[20];
	int stock;
	char lokasi[20];
}
   	brg;
  	brg barang[5];
   	brg lok[5];
   	brg temp;
   	int n,i,b, cari, ada;
	
}; 

int main(){
	ahoy run;
	run.input();
	run.proses();
	run.output();
}
