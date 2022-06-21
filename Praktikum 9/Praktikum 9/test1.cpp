#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
int a[10][10];
int  aray[10];
int cur,cur2,temp;
int tukar;
int z;
	cout<<"\t\nMasukkan Data : ";
	cin>>z;
	
	for(int i=0;i<z;i++)
	for(int j=0;j<z;j++){
		cout<<"\tData["<<i<<"]["<<j<<"] : ";
		cin>>a[i][j];
	}
		cout<<" \n\tArray 2 dimensi di konversi menjadi 1 dimensi : \t"<<endl;
	int k=0;
	for (int i=0; i<z; i++){
		for (int j=0; j<z; j++){
		aray[k]=a[i][j];
		k++;
		}
	}
		for (int k=0; k<z*z; k++){
		cout<< "\t";
     	cout<<aray[k]<<" ";
	{	
}
}
	cout<<endl;
	cout<<"\n\tBentuk array 2 dimensi sebelum dikonversi : \t"<<endl;
	for (int i=0; i<z; i++){
		for (int j=0; j<z; j++ ){
			cout<< "\t";
			cout<< a[i][j]<<" ";
		}
		cout<< endl;
	}
	
};

