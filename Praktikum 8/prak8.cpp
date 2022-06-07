#include<iostream.h>
#include<conio.h>

#define z 3

main(){

int A[z][z]={0},B[z][z]={0},C[z][z]={0},D[z][z]={0},E[z][z]={0},i=0,j=0;

 

cout<<endl<<“INPUT MATRIKS A”<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

cout<<“Input elemen baris ke-“<<i+1<<” kolom ke-”

<<j+1<<” : “;cin>>A[i][j];

}

}

 

cout<<endl<<“INPUT MATRIKS B”<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

cout<<“Input elemen baris ke-“<<i+1<<” kolom ke-”

<<j+1<<” : “;cin>>B[i][j];

}

}

 

cout<<endl<<“================================================”<<endl<<endl;

 

cout<<“Tampilan Matriks A : “<<endl<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

cout<<” “<<A[i][j];

}

cout<<endl;

}

 

cout<<“Tampilan Matriks B : “<<endl<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

cout<<” “<<B[i][j];

}

cout<<endl;

}

 

cout<<endl<<“Penjumlahan matriks A dengan matriks B :”<<endl<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

C[i][j]=A[i][j]+B[i][j];

cout<<” “<<C[i][j]<<“\t”;

}

cout<<endl;

}

 

cout<<endl<<“Pengurangan matriks A dengan matriks B :”<<endl<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

D[i][j]=A[i][j]-B[i][j];

cout<<” “<<D[i][j]<<“\t”;

}

cout<<endl;

}

 

 

cout<<endl<<“Pekalian matriks A dengan matriks B :”<<endl<<endl;

for(i=0;i<z;i++){

for(j=0;j<z;j++){

for(int x=0;x<z;x++){

E[i][j]=E[i][j]+A[x][j]*B[i][x];

}

cout<<” “<<E[i][j]<<“\t”;

}

cout<<endl;

}

 

 

getch();

}
