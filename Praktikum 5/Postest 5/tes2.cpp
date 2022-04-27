#include <iostream>
using namespace std;

void rekursi(int a, int b){
 if (b!=0){
  a=a+1;
  b=b-1;
 rekursi(a, b);
 }
 else{
  cout << "keluar " << a << " " << b <<endl;
 }
}

int main(){
 int a;
 cout << "Masukkan Nilai a: ";
 cin >> a;
 int b;
 cout << "Masukkan Nilai b: ";
 cin >> b;
 cout << "masuk " << a << " " << b <<endl;
 rekursi(a,b);
}
