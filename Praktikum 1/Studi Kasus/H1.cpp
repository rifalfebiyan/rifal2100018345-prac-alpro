#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

class spbu{
	private:
		int lite, max;
		float total, banyak;
		int pilih;
		string nama;
		
	public:
	spbu();
	void tampil();
	void bebas();

};
spbu :: spbu(){
	int lite = 7000;
	int max = 9000;
}
void spbu :: bebas(){
	cout << "selamat datang di spbu 12 \n";
			cout << "dengan siapa ?";
			cin >> nama;
			cout << "mau isi bahan bakar apa " << nama << endl;
			cout << "1.pertalite\n";
			cout << "2.pertamax\n";
			cout << "masukan pilihan ";
			cin >> pilih;
			
			if (pilih == 1){
				cout << "mau beli berapa banyak ";
				cin >> banyak;
				total = banyak * 7000;
			}
			else if (pilih == 2){
			
			cout << "mau beli berapa banyak ";
				cin >> banyak;
				total = banyak * 9000;}
}
void spbu::tampil(){

	int bayar, kembalian;
	ofstream file ("hasil.txt");
	cout << endl;
	
	if(!file.is_open()){
		
		cout<< "Tidak Bisa Membuka File";
	}
	
	else{
	cout << "||==================================================||"<<endl;
	file << "||==================================================||"<<endl;
	cout << "||                 Data pembelian                   ||"<<endl;
	file << "||            jumlah yang harus di bayar            ||"<<endl;
	cout << "||==================================================||"<<endl;
	file << "||==================================================||"<<endl;
	cout << "atas nama " << nama << endl;
	file << "atas nama " << nama << endl;
	cout << "jumlah liter " << banyak << endl;
	file << "jumlah liter " << banyak << endl;
	cout  << "bayar ";cin >> bayar;
	file << "bayar " << bayar << endl;
	kembalian=bayar-total;
		cout << "Kembalian \t: " << kembalian << endl;
	file << "Kembalian : " << kembalian << endl;
	cout << "\n\n=========TERIMAKASIH SUDAH BERKUNJUNG==========\n";
	file << "\n\n=========TERIMAKASIH SUDAH BERKUNJUNG==========";
	
	
	file.close();
	}
}
	

	
			

int main(){
	spbu x;
	x.bebas();
	x.tampil();
	
	return 0;
}
