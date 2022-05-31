#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
char kalimat[50], huruf;
int index[50], b=0, k=0;
	cout<<"Masukkan kalimat : ";cin>>kalimat;
	cout<<"Masukkan huruf yang ingin dicari : ";cin>>huruf;
		for(int i=0; i<strlen(kalimat); i++){
		if(huruf==kalimat[i]){
		index[k] = i;
		k++;
		b = 1;
}}
if(b!=0){
	cout<<"Huruf "<<huruf<<" terdapat pada index :"<<endl;
		for(int l=0; l<k; l++){
	cout<<index[l]<<endl;
}}
else{
	cout<<"Huruf "<<huruf<<" tidak terdeteksi";
}
return 0;
}
