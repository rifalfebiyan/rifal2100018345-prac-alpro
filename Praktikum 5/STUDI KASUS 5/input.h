using namespace std;
class Input{
public:
	void cetak(){
		cout << "Input Nama : ";
		cin >> nama;
		cout << "Input NIM : ";
		cin >> nim;
		cout << "Jumlah Matkul : "; cin >> jumlah_matkul;
		for(int i=0; i<jumlah_matkul; i++){
			cout << "Matkul ke-" <<i+1 << " : "; cin >> matkul[i];
			cout << "Jumlah SKS-nya : "; cin >>jumlah_sks[i];
		}
	}
	void toFile(){
		tulis_data.open("apidata.txt");
		tulis_data <<nama<< endl;
		tulis_data <<nim << endl;
		tulis_data << jumlah_matkul << endl;
		for (int y=0; y<jumlah_matkul; y++){
			tulis_data << matkul[y] << endl;
			tulis_data << jumlah_sks[y] << endl;
		}
		tulis_data.close();
	}
private:
	ofstream tulis_data;
	string nama,matkul[30];
	int nim,jumlah_matkul,jumlah_sks[30];
};
