#include<iostream>
#include <fstream>
using namespace std;

main () {
	int liter;
	int total;
	int choice;
	int pilihan;
	char nama[999];
	char jenis[999];
	
		system("CLS");
		cout<<"\n=================================\n";
		cout<<"          BENSIN\n";
		cout<<"        Jl. Pendidikan\n";
		cout<<"=================================\n";
		cout<<"PILIHAN MENU:\n";
		cout<<"1) Pilih jenis bensin\n";
		cout<<"2) Keluar\n";
		cout<<"=================================\n";
		cout<<"Masukkan pilihan menu = \n";
		cin>>choice;
		cout<<"=================================\n";
		
		if(choice==1){
			cout<<"Menu Pilihan"<<endl;
			cout<<"1) Pertamax "<<endl;
			cout<<"2) Pertalite"<<endl;
			cin>>pilihan;
			switch (pilihan){
				case 1 :
					system("CLS");
					cout<<"Nama Pelanggan         : ";
					cin>>nama;
					cout<<"Konfirmasi nama bensin : ";
					cin>>jenis;
					cout<<"Masukkan banyak liter  : ";
					cin>>liter;
					total=9000*liter;
					cout<<"Total Harga            : "<<total;
					cout<<endl;
					system("pause");
					break;
					
				case 2 :
					system("CLS");
					cout<<"Nama Pelanggan         : ";
					cin>>nama;
					cout<<"Konfirmasi nama bensin : ";
					cin>>jenis;
					cout<<"Masukkan banyak liter  : ";
					cin>>liter;
					total=7000*liter;
					cout<<"Total Harga            : "<<total;
					cout<<endl;
					system("pause");	
					break;
					
				}
			}
			ofstream mantap;
			cout<<"============================"<<endl;
			cout<<"   Struk berhasil dibuat...."<<endl;
			cout<<"============================"<<endl;
			mantap.open("MANTAPCAURRR.txt",ios::trunc);
			
			if (mantap.is_open()){
				mantap<<"Nama pelanggan : "<<nama<<endl;
				mantap<<"Total liter    : "<<liter<<endl;
				mantap<<"jenis bensin   : "<<jenis<<endl;
				mantap<<"Total harga    : "<<total<<endl;	
				mantap.close();
			}

	}
	return 0;
}
