#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
	int A[3][3] = {{12,17,10},{5,15,3},{8,18,19}};
	int B[3][3] = {{25,11,7},{25,16,22},{14,20,29}};
	int C[18] = {0};
	int i, j, f, g;
	int n = 18;
	
	cout << "Isi array A : "<<endl;
	for (i=0; i<3; i++) {
		for(j=0;j<3;j++){
			cout << A[i][j] <<" ";
		}
		cout<<endl;
	}

	cout<<endl;
	
	cout << "Isi array B : "<<endl;
	for (i=0; i<3; i++) {
		for(j=0;j<3;j++){
			cout << B[i][j] <<" ";
		}
		cout<<endl;
	}
	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			C[f] = A[i][j];
			f++;
		}
	}
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			C[f] = B[i][j];
			f++;
		}
	}
	
	cout<<endl;
	
	cout << "Isi array setelah digabung  : ";
	for (f=0; f<18; f++) {
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
	for (f = 0; f < 18; f++)
        cout << C[f] << ", ";
    cout << endl;

	return 0;
}

