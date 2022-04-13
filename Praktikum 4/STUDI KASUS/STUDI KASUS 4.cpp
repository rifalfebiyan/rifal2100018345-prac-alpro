#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Pemasukkan{
	public:
		int pemasukkan =0;
		void print();
		int akumulasi(int a, int pendapatan);
};


int Pemasukkan::akumulasi(int a, int pendapatan){
	int n;
	int x;
	int hasil;
	
	if(a > 0, a <= 5){ 
		cout <<"\t\t";
		cin >> n;
		cout << "\t\t\t\t";
		cin >>x;
		hasil = pendapatan-x+n;
		cout << "| " << a << "\t   |" << "\t\t" << "  |\t" << "\t  |\t" << hasil << "\t\t|" << endl;
		cout << "____________________________\n";
		return akumulasi(a+1, pendapatan-x+n);
	}
}

void Pemasukkan::print(){
	int jumlahdapat;
	cout << "==================== AKUMULASI TABUNGAN ========================\n ";
	cout << "              dalam kurun waktu 5 hari\n";
	cout << "================================================================\n";
	cout << "\n";
	cout << "| Hari ke |   Tabungan   |   Pengeluaran  |   Total Tabungan  |\n";
	cout << "---------------------------------------------------------------\n";
	akumulasi(1, jumlahdapat);
}
int main (){
	Pemasukkan rifal;
	rifal.pemasukkan;
	rifal.print();
	return 0;
}
