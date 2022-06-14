//RIFAL FEBIYAN
#include<iostream>
using namespace std;
class ahoy{
	public :
		void input(){
			cout << "Angka Buku : "<<endl;
			for (i=0; i<24; i++){
            	cout << "Buku "<<z + 1 <<" = ";
            	cin >> B[i];
            	z++;
    		}
      cout<<endl;
			cout << "Buku sebelum diurutkan : ";
			for (i=0; i<24; i++) {
				cout << B[i] << ", ";
			}
		}
		void proses(){
			for (q = 0; q < n - 1; q++){
        		for (i = 0; i < n - q - 1; i++){
            		if (B[i] > B[i + 1]){
                		swap(B[i], B[i + 1]);
            		}
        		}	
    		}
		    i=0;
		    for(k=0;k<4;k++){
		    	for(L=0;L<6;L++){
		    		F[k][L] = B[i];
					i++;	
				}
			}
		}
		void output(){
			cout<<endl;
			cout << "Buku setelah diurutkan : ";
		    for (i = 0; i < 24; i++)
		        cout << B[i] << ", ";
		    cout << endl << endl;
			
			cout << "Isi array A : "<<endl;
			for(k=0;k<4;k++){
		    	for(L=0;L<6;L++){
		    		cout <<"|Judul Buku : "<<F[k][L] <<" |";
				}
				cout<<endl;
			}	
		}
	private:
	int F[4][6];
	int B[24];
	int i, k, L, q;
	int n = 24;
	int z = 0;
	int temp;
};

int main(){
	ahoy run;
	run.input();
	run.proses();
	run.output();
	return 0;
}
