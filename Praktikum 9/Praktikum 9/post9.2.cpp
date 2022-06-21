#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? j;
   ?? b;
   ?? a;
   ?? tmp;
   ??[] arr1 = new ??[??+1];
   ??[,] arr = new ??[??+1,??+1];

   arr[3,3] = 0;
   arr1[9] = 0;
   a =1;
   while (!(a>3))
   {
      b =1;
      while (!(b>3))
      {
         raptor_prompt_variable_zzyz ="Masukan array["+(a-1)+"]["+(b-1)+"] : ";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> arr(a,b);
         b =b+1;
      }
      a =a+1;
   }
   j =1;
   a =1;
   cout << "Data sebelum di sorting =" << endl;   while (!(a>3))
   {
      b =1;
      while (!(b>3))
      {
         arr1[j] = arr(a,b);
         cout << arr(a,b);         j =j+1;
         b =b+1;
      }
      cout << " " << endl;      a =a+1;
   }
   tmp =0;
   a =1;
   cout << "Data setelah di sorting =" << endl;   while (!(a>9))
   {
      b =1;
      while (!(b>8))
      {
         if (arr1(b)>arr1(b+1))
         {
            tmp =arr1(b);
            arr1[b] = arr1(b+1);
            arr1[b+1] = tmp;
         }
         else
         {
         }
         b =b+1;
      }
      a =a+1;
   }
   j =1;
   a =1;
   while (!(a>3))
   {
      b =1;
      while (!(b>3))
      {
         arr[a,b] = arr1(j);
         j =j+1;
         b =b+1;
      }
      a =a+1;
   }
   a =1;
   while (!(a>3))
   {
      b =1;
      while (!(b>3))
      {
         cout << arr(a,b);         b =b+1;
      }
      a =a+1;
      cout << " " << endl;   }

   return 0;
}
