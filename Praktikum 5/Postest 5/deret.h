#include <iostream>
using namespace std;
void deret() {
   string raptor_prompt_variable_zzyz;
   float k;
   float jumlah;
   int i;
   int n;

   raptor_prompt_variable_zzyz ="Masukkan Nilai n = ";
   cout << raptor_prompt_variable_zzyz;
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
   cout << "="<<jumlah << endl;}
