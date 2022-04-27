#include <iostream>
#include <conio.h>
using namespace std;
int faktorial (int n){
int i,produk;
for(i=1;i<=n;i++){
produk=produk*i;
}
return(produk);
}
main(){
int faktor;
cout<<"Masukkan beberapa faktorial = ";cin>>faktor;
cout<<"maka hasilnya = "<<faktorial(faktor);
getch();
}
