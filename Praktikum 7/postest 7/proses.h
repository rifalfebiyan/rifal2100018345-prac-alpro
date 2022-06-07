#include <iostream>
#include <string>
using namespace std;

void proses(){
   int j;
   int i;
   int temp;
   int data[8];
	i =1;
   while (1)
   {
      cout << "Proses Pengurutan "<<i<<" = " << endl;      
	  if (i>8) break;
      j =1;
      while (!(j>7))
      {
         if (data[j]>data[j+1])
         {
            temp =data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
         }
         else
         {
         }
         cout << data[j] << endl;         
		 j =j+1;
      }
      i =i+1;
   }
		}
