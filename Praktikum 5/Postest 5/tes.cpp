#include<iostream>
using namespace std;

void kuy(){
	string a [20], b[20]; 
	int bykA,i; 
	char nama,nim;
	cout<<"\nMASUKKAN BANYAK Mata kuliah :  ";
	cin>>bykA; 
	for(i=0; i<bykA; i++){  
			cout<<"MASUKKAN Mata kuliah " <<i+1<<" : ";  
			cin>>a[i];	
			cout<<"Masukkan SKS : ";
			cin>>b[i];
		}
	cout<<"Masukkan Nama : ";
	cin>>nama; 
	cout<<endl;
	cout<<"Masukkan NIM : ";
	cin>>nim;
	}
		
int main(){
	kuy();
}
