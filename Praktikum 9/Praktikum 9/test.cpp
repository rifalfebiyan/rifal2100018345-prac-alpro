#include<iostream>
using namespace std;
int main(){
	int A[10][10];
	int C[10];
	int i, j, f, g, n;
	int temp, temp2, kur;
	
	cout << "Masukkan banyak data : ";
	cin >> n; 
	
	cout << endl;
	 
	cout << "Pengisian array A : "<<endl;
	for (i=0; i<n; i++){
		for (j=0;j<n;j++){
            cout << "Masukan index [" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
    
    cout<<endl;
	cout << "Isi array A : "<<endl;
	for (i=0; i<n; i++) {
		for(j=0;j<n;j++){
			cout << A[i][j] <<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[f] = A[i][j];
			f++;
		}
	}

	cout<<endl;
	
	cout << "Isi array setelah digabung  : ";
	for (f = 0; f < n * n; f++) {
		cout << C[f] << ", ";
	}
	
	cout<<endl;

	for (i = 0; i < n - 1; i++){
        for (f = 0; f < n - i - 1; f++){
            if (C[f] > C[f + 1]){
                swap(C[f], C[f + 1]);
            }
        }
    }
        
	cout << "Isi array setelah diurutkan : ";
	for (f = 0; f < n * n; f++)
        cout << C[f] << ", ";
    cout << endl << endl;
    
    for(i = 0; i < n; i++)
    	for( j = 0; j < n; j++){
    		temp = i;
    		temp2 = j;
    		for(int q = 0; q < n; q++)
    			for(int r = 0; r < n; r++){
    				if(A[temp][temp2] < A[q][r]){
    					temp = q;
    					temp2 = r;
					}
					kur = A[i][j];
					A[i][j] = A[temp][temp2];
					A[temp][temp2] = kur;	
				}
		}
    cout<<"Array A dikembalikan ke 2 dimensi"<<endl;
	cout << "Isi array A : "<<endl;
	for (i=0; i<n; i++) {
		for(j=0;j<n;j++){
			cout << A[i][j] <<" ";
		}
		cout<<endl;
	}
	return 0;
}
