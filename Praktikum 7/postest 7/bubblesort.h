#include <iostream>
#include <string>
using namespace std;
   bubble_sort(int data[8]){
   int j;
   int i;
   int temp;
   i =1;
   while (1)
   {
      cout << "Tahap "<<i<<" = " << endl;      
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
   cout << "Data Setelah diurutkan : " << endl;   
   i =1;
   while (!(i>8))
   {
      cout << data[i] << endl;      
	  i =i+1;
   }
   return 0;
}
