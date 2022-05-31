#include <iostream>
#include <string>

using namespace std;
int main(){
   int i;
   int b;
   int a[4];

   cout<<"Masukkan elemen ke-1 = ";
   cin >> a[1];
   cout<<"Masukkan elemen ke-2 = ";
   cin >> a[2];
   cout<<"Masukkan elemen ke-3 = ";
   cin >> a[3];
   cout<<"Geser ke Kiri tekan (1) geser ke Kanan tekan (2) : ";
   cin >> i;
   b =0;
   cout << "Elemen sebelum digeser = "<<a[1]<<a[2]<<a[3] << endl;   
   if (i==1)
   {
   	  b =a[1];
      a[1] = a[2];
      a[2] = a[3];
      a[3] = b;
      cout << "Hasil setelah digeser Kiri = "<<a[1]<<a[2]<<a[3] << endl;   }
   else
   {
      b =a[3];
      a[3] = a[2];
      a[2] = a[1];
      a[1] = b;
      cout << "Hasil setelah digeser Ke Kanan = "<<a[1]<<a[2]<<a[3] << endl;   }

   return 0;
}
