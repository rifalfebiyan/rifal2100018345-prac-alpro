#include <iostream>
#include <string>
#include "bubblesort.h"
int main(){
   int data[8]; 
   int i;
   cout << "Nilai Sebelum diurutkan" << endl;   i =1;
   while (!(i>8))
   {
      cout<< "Masukkan Data : ";
      cin >> data[i];
      cout << "Isi Data : "<<data[i] << endl;      
	  i =i+1;
   }
   bubble_sort(data);
		}
