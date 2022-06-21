#include <iostream>
#include <string>
using namespace std;

class ahoy{
	public:
		int n;
		string *nama = new string[n];
    		int *nim = new int;
    	
		void input(){
    			cout <<"Masukkan Jumlah Data yang di Input: ";
    			cin >> n;
		}
		void proses(){
		
		    for(int i = 0; i <n; i++)
		    {
		        cout<<"Masukkan Data ke-" << i <<endl;
		        cout<<"Masukkan Nama : "; 
		        cin>>nama[i];
		        cout<<"Masukkan NIM  : "; 
		        cin>>nim[i];
		
		    }
		
	
			cout<<"Menampilkan Data Keseluruhan"<<endl;
		    for(int i=0; i<n; i++){
		        cout<<"Data ke-"<<i<<endl;
		        cout<<"Nama  : "<<nama[i]<<endl;
		        cout<<"NIM   : "<<nim[i]<<endl;
		    }
			cout<<endl;
	}


	
		
};

int main(){
	ahoy run;
	run.input();
	run.proses();

}


