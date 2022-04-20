using namespace std;
class Output{
public:

	void getData(){
		ambil_data.open("apidata.txt");
		bool name = true;
		bool nomor = true;
		bool bnyksks = true;
		bool byr = true;
		bool bnykmatkul = true;
		while(!ambil_data.eof()){
			if(name){
				ambil_data >> nama ;
				name = false;
			}
			else if(nomor){
				ambil_data >> nim;
				nomor = false;
			}
			else if(bnyksks){
				ambil_data >> banyak_sks;
				bnyksks = false;
			}
			else if(byr){
				ambil_data>>jumlah_bayar;
				byr = false;
			}
			else if (bnykmatkul){
				ambil_data >> banyak_matkul;
				bnykmatkul = false;
			}
			else{
				while(!ambil_data.eof()){
					ambil_data>>matkul[p];
					p+=1;
				}
			}
		}
		ambil_data.close();
	}
	void cetak(){
		cout << "Nama = " << nama << endl;
		cout << "NIM = " << nim << endl;
		cout << "Daftar Mata Kuliah : " ;
		for (int h=0; h<banyak_matkul; h++){
			cout << matkul[h] << ", " ;
		}
		cout << "\nJumlah SKS : " << banyak_sks << endl;
		cout << "Total Pembayaran : " << jumlah_bayar;
	}
private:
	ifstream ambil_data;
	string nama, matkul[30];
	int nim, banyak_sks, banyak_matkul,jumlah_bayar;
	int p = 0;
};
