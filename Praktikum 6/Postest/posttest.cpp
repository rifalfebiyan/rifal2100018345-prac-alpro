#include <iostream>
#include <string>

using namespace std;
class geser{
      public:
             void kanan (int n, int A[100]);
             void kiri (int n,int A[100]);
             void hapus (int n, int A[100]);

      };

 void geser::kanan (int n, int A[100])
{
   int temp;
   int i;
   //int a[100];

   temp =A[n];
   i =n;
   while (1)
   {
      A[i+1] = A[i];
      A[1] = temp;
      if ((i==1)) break;
      i =i-1;
   }
   cout << "nilai hasil geser kanan" << endl;   i =1;
   while (1)
   {
      cout << A[i] << endl;      if ((i==n)) break;
      i =i+1;
   }
}
 void geser::kiri (int n,int A[100])
{
   int temp;
   int i;
   //int a = new int[int+1];

   temp =A[1];
   i =1;
   while (1)
   {
      if (i==n)
      {
         A[i] = A[n];
         A[n-1] = temp;
      }
      else
      {
         A[i] = A[i+1];
         A[n-1] = temp;
      }
      if ((i==n)) break;
      i =i-1;
   }
   cout << "nilai hasil geser kiri" << endl;   i =1;
   while (1)
   {
      cout << A[i] << endl;      if ((i==n)) break;
      i =i+1;
   }
}
int main()
{
    geser x;
   string raptor_prompt_variable_zzyz;
   int n;
   int i;
   int A[100];

   raptor_prompt_variable_zzyz ="input banyak elemen : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> n;
   i =1;
   while (1)
   {
      raptor_prompt_variable_zzyz ="masukkan elemen : ";
      cout << raptor_prompt_variable_zzyz;
      cin >> A[i];
      if ((i==n)) break;
      i =i+1;
   }
   cout << "nilai awal" << endl;   i =1;
   while (1)
   {
      cout << A[i] << endl;      if ((i==n)) break;
      i =i+1;
   }
   x.kanan(n,A);
   cout<<endl;
   system("PAUSE");
   return 0;
}

