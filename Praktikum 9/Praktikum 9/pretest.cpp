#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
int a[10][10];
int aray[10];
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
	cout<<endl;
	cout<<"\n\tBentuk array 2 dimensi sebelum dikonversi : \t"<<endl;
	for (int i=0; i<z; i++){
		for (int j=0; j<z; j++ ){
			cout<< "\t";
			cout<< a[i][j]<<" ";
		}
		cout<< endl;
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
cout<<" \n\tSetelah dikonversi menjadi array 1 dimensi, di sorting menggunakan bubble sort : \t"<<endl;
	for (int k=0; k<z*z; k++){
		tukar = k;
		int temp;
		for(int j= k+1; j < z*z; j++){
		if(aray[j] < aray[tukar]){
			tukar = j;
		}
	}
	temp = aray[tukar];
	aray[tukar] = aray[k];
	aray[k] = temp;
	cout<< "\t";
	cout<< aray[k]<<" ";	
	}
	cout<<endl;
	cout<<"\n\tHasil array 1 dimensi yang telah di sorting di kembalikan/konversi menjadi array 2 dimensi : \t"<<endl;
	for(int i=0;i<z;i++)
    for(int j=0;j<z;j++)
    {
        cur=i;
        cur2=j;
        for(int k=0;k<z;k++)
        for(int l=0;l<z;l++)
              { 
                   if(a[cur][cur2]<a[k][l])
                   { 
                        cur=k;
                        cur2=l;
                   }
                   temp=a[i][j];     
        a[i][j]=a[cur][cur2];
        a[cur][cur2]=temp;
              }   
    }   
    for(int i=0;i<z;i++)
    {
    for(int j=0;j<z;j++)
    {
       cout<<"\t";
       cout<<" "<<a[i][j];
    }
   cout<<endl;
} 
};

