#include <iostream>
#include <string>
using namespace std;
int main(){
   float k;
   float jumlah;
   int i;
   int n;

   cout<<"Masukkan Nilai n = ";
   cin >> n;
   jumlah =0;
   i =1;
   k =1;
   while (!(k>n))
   {
      if (i % 2==1)
      {
         jumlah =jumlah+1/k;
         cout << "+1/"<<k << endl;      }
      else
      {
         jumlah =jumlah-1/k;
         cout << "-1/"<<k << endl;      }
      i =i+1;
      k =k+1;
   }
   cout <<"jika nilai n = "<<n<<" maka hasilnya "<<jumlah << endl;
   return 0;
}
