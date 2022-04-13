#include <iostream>
#include <string>
#include "pangkat.h"
using namespace std;
 
int main()
{
   int x;
   int y;
   cout<<"Masukkan Nilai X = ";
   cin >> x;
   cout<<"Masukkan Pangkat Y = ";
   cin >> y;
   cout<<"Hasil dari "<<x<<" Pangkat "<<y<<" Adalah = ";
   hitung_pangkat(x,y);
   return 0;
}
