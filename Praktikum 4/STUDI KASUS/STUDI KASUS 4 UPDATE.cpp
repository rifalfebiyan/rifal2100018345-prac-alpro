#include <iostream>
#include <iomanip>
using namespace std;

class operasi{
	public:
		void hitung(int uang_saku);
		void tabel();
	private:
		int uang_saku;
		int out[12];
		int tabungan=0;
   		int total=0;
};

void operasi::hitung(int uang_saku){
	for (int i=0;i<=11;i++){
		cout<<"Masukkan pengeluaran bulan ke-"<<i+1<<"    : ";cin>>out[i];
        tabungan+=uang_saku-out[i];
        total+=out[i];
        cout<<"\nBulan Ke        : "<<i+1<<endl;	
        cout<<"Uang saku         : "<<uang_saku<<endl;			
        cout<<"Pengeluaran       : "<<out[i]<<endl;
	cout<<"Total Pengeluaran : "<<total<<endl;
	cout<<"Tabungan          : "<<tabungan<<endl<<endl;                                             
	}
}

int main (){
	operasi x;
	int uang_saku;
	cout<<"Masukkan uang saku anda tiap bulan : ";cin>>uang_saku;
	x.hitung(uang_saku);
}
