#include <iostream>
#include <string>

using namespace std;
 void geser() {
   string raptor_prompt_variable_zzyz;
   int i;
   int b;
   int a[4];

   raptor_prompt_variable_zzyz ="Masukkan elemen ke-1 = ";
   cout << raptor_prompt_variable_zzyz;
   cin >> a[1];
   raptor_prompt_variable_zzyz ="Masukkan elemen ke-2 = ";
   cout << raptor_prompt_variable_zzyz;
   cin >> a[2];
   raptor_prompt_variable_zzyz ="Masukkan elemen ke-3 = ";
   cout << raptor_prompt_variable_zzyz;
   cin >> a[3];  
   raptor_prompt_variable_zzyz ="Geser ke Kanan tekan = 1 geser ke kiri tekan = 2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> i;
   cout << "Elemen sebelum digeser = "<<a[1]<<a[2]<<a[3] << endl; 
   if (i==1)
   {
   	  b=a[1];
      a[1] = a[2];
      a[2] = a[3];
      a[3] = b;
      cout << "Hasil setelah digeser kekanan = "<<a[1]<<a[2]<<a[3] << endl;   }
   else
   {
      b =a[3];
      a[3] = a[2];
      a[2] = a[1];
      a[1] = b;
      cout << "Hasil setelah digeser kekiri = "<<a[1]<<a[2]<<a[3] << endl;   }
}
int main()
{

   geser();

   return 0;
}
