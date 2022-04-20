using namespace std;

class Proses
{
public:
	void getData(){
		ambil_data.open("apidata.txt");
		bool name = true;
		bool nimm = true;
		bool bnyk = true;
		while(!ambil_data.eof()){
			if(name){
				ambil_data>> nama;
				name = false;
			}
			else if(nimm){
				ambil_data>>nim;
				nimm = false;
			}
			else if(bnyk){
				ambil_data >> jumlah_matkul;
				bnyk = false;
			}
			else{
				for (int i = 0; i < jumlah_matkul; ++i)
				{
					ambil_data>> matkul[i];
					ambil_data >> sks[i] ;
				}
			}

		}
		ambil_data.close();

	}
	//rekursif
	int total(int y){
		int hasil = 120000;
		if (y==0){
			return hasil;
		}
		else {
			return hasil+total(y-1);
		}
	}
	void cetak(){
		for(int j=0; j<jumlah_matkul; j++){
			jumlah_sks += sks[j];
		}
		cout << "Jumlah SKS = " << jumlah_sks << endl;
		cout << "Total biaya sks = " << total(jumlah_sks) << endl;
		cout << "Nama : " << nama << endl;
		cout << "Jumlah Mata Kuliah : " << jumlah_matkul << endl;
		cout << "Daftar Mata Kuliah : ";
		for (int w=0; w<jumlah_matkul; w++){
			cout << matkul[w] << ", ";
		}
		

	}
	void toFile(){
		tulis_data.open("apidata.txt");
		tulis_data << nama << endl;
		tulis_data << nim << endl;
		tulis_data << jumlah_sks << endl;
		tulis_data << total(jumlah_sks)<< endl;
		tulis_data << jumlah_matkul << endl;
		for (int d=0; d<jumlah_matkul; d++){
			tulis_data << matkul[d] << endl;
		}
		tulis_data.close();
	}

private:
	ifstream ambil_data;
	ofstream tulis_data;
	string nama,matkul[30];
	int nim, sks[30];
	int jumlah_matkul,jumlah_sks;
	int biaya = 120000;
	int bayar;

};
