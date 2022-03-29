#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void jarak(int x1,int x2,int y1,int y2){
	float a=(x2-x1)*(x2-x1);
    float b=(y2-y1)*(y2-y1);
    float hasil=sqrt(a+b);
    cout << "Hasil dari jarak A dan B adalah: "<<hasil<< endl;
}
main(){
	int x1,x2,y1,y2;
 
 cout <<"Masukkan X1: ";
 cin >>x1;
 cout << "Masukkan X2: ";
 cin>>x2;
 cout << "Masukkan Y1: ";
 cin >>y1;
 cout << "Masukkan X1: ";
 cin >>y2;
 jarak(x1,x2,y1,y2);
}
