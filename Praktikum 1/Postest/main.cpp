#include <iostream>
#include <math.h>
using namespace std;
 
void Jumlah(){
    float a, b;
    float hasil;
    system("CLS");
    cout << "Bilangan Pertama : "; cin >> a;
    cout << "Bilangan Kedua   : "; cin >> b;
    hasil = a+b;
    cout << "\nHasil "<<a<<" + "<<b<<" adalah" << endl;
    cout << "= "<<hasil;
}
 
void Kurang(){
    float a, b;
    float hasil;
    system("CLS");
    cout << "Bilangan Pertama : "; cin >> a;
    cout << "Bilangan Kedua   : "; cin >> b;
    hasil = a-b;
    cout << "\nHasil "<<a<<" - "<<b<<" adalah" << endl;
    cout << "= "<<hasil;
}
 
void Kali(){
    float a, b;
    float hasil;
    system("CLS");
    cout << "Bilangan Pertama : "; cin >> a;
    cout << "Bilangan Kedua   : "; cin >> b;
    hasil = a*b;
    cout << "\nHasil "<<a<<" x "<<b<<" adalah"<<endl;
	cout << "= "<<hasil;
}
 
void Bagi(){
    float a, b;
    float hasil;
    system("CLS");
    cout << "Bilangan Pertama : "; cin >> a;
    cout << "Bilangan Kedua   : "; cin >> b;
    hasil = a/b;
    cout << "\nHasil "<<a<<" / "<<b<<" adalah" << endl;
    cout << "= "<<hasil;
}
int main(){
 	int opr,answer;
 	char u;
 	do {
 		system("CLS");
	 	cout << "PROGRAM KALKULATOR" << endl;
	 	cout << "  1) PILIH MENU OPERASI  " << endl;
	 	cout << "  2) KELUAR" << endl;
	 	cout<<"Pilihan : ";cin >>answer;
	 	
 		if(answer==1)
 		{
	 		system("CLS");
		    cout << " PILIH MENU OPERASI : " << endl;
		    cout << "  1. Penjumlahan" << endl;
		    cout << "  2. Pengurangan" << endl;
		    cout << "  3. Perkalian" << endl;
		    cout << "  4. Pembagian" << endl;
		    cout << "Pilih Menu No \t : ";
		    cin >> opr;
		    
			if (opr==1)
			{
				Jumlah();
			}
			else if(opr==2)
			{
				Kurang();
			}
			else if(opr==3)
			{
				Kali();
			}
			else if(opr==4)
			{
				Bagi();
			}
			cout<<endl;
			cout<<endl;
			system("pause");
 		}
		else if(answer==2)
		{
			system("CLS");
			cout<<"\nTerimakasih sudah menggunakan kalkulator ini";
		}
		else
		{
			cout<<"PILIH MENU DENGAN BENAR !!!!!";
			cout<<"SILAHKAN UALNG KEMBALI";
		}
 	}	
 	while (answer==1);
 	return 0; 
}
