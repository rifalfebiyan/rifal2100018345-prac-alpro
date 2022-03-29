#include <iostream>
#include <math.h>
#include <string>
using namespace std;
main(){
	int x1,x2,y1,y2;
 	float a,b,jarak;
 
 cout <<"Masukkan X1: ";
 cin >>x1;
 cout << "Masukkan X2: ";
 cin>>x2;
 cout << "Masukkan Y1: ";
 cin >>y1;
 cout << "Masukkan X1: ";
 cin >>y2;
 
 a=(x2-x1)*(x2-x1);
 b=(y2-y1)*(y2-y1);
 jarak=sqrt(a+b);
 cout << "Hasil dari jarak A dan B adalah: "<<jarak << endl;
 return 0;
}

