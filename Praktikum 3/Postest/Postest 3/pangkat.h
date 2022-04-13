#include <iostream>
using namespace std;
hitung_pangkat(int x, int y)
{
   int i;
   int pangkat;

   pangkat =1;
   i =1;
   while (!(i>y))
   {
      pangkat =pangkat*x;
      i =i+1;
   }
   cout << pangkat << endl;
   }
   
   
