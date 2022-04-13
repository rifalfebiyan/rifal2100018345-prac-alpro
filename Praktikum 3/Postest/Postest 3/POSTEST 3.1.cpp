#include <iostream>
#include <string>
using namespace std;
int main(){
   int x,y,i,pangkat;
   
   cout<<"Masukkan Nilai X = ";cin >> x;
   cout<<"Masukkan Nilai Pangkat Y = ";cin>>y;
   pangkat =1;
   i =1;
   while (!(i>y))
   {
      pangkat =pangkat*x;
      i =i+1;
   }
   cout<<"Hasil dari "<<x<<" Pangkat "<<y<<" Adalah = "<<pangkat << endl;
   return 0;
}
