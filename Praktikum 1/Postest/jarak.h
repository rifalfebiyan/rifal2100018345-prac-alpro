#include <iostream>
#include <math.h>
using namespace std;

jarak_hasil(int x1,int x2,int y1,int y2){
	float a=(x2-x1)*(x2-x1);
    float b=(y2-y1)*(y2-y1);
    float hasil=sqrt(a+b);
    cout << "Hasil dari jarak A dan B adalah: "<<hasil<< endl;
    return hasil;
}

