#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(){
char kalimat['algoritma'], huruf=['k'];
int jumlah=0, arrayindex[50], ada=0, k=0;
for(int i=0; i<strlen(kalimat); i++){
if(huruf==kalimat[i]){
jumlah++;
arrayindex[k] = i;
k++;
ada = 1;
}
}
if(ada!=0){
cout<<"Huruf "<<huruf<<" terdapat dalam kalimat yang diinput."<<endl;
cout<<"Jumlah huruf "<<huruf<<" sebanyak "<<jumlah<<" buah"<<endl;
cout<<"Huruf "<<huruf<<" terdapat pada index :"<<endl;
for(int l=0; l<k; l++){
cout<<arrayindex[l]<<endl;
}
}
else{
cout<<"Huruf "<<huruf<<" tidak terdapat dalam kalimat yang diinput";
}
return 0;
}
