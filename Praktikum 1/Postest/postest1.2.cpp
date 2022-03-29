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
int main(){
 string raptor_prompt_variable_zzyz;
int x1,x2,y1,y2;
 raptor_prompt_variable_zzyz ="Masukkan X1: ";
 cout << raptor_prompt_variable_zzyz;
 cin >>x1;

 raptor_prompt_variable_zzyz ="Masukkan X2: ";
 cout << raptor_prompt_variable_zzyz;
 cin>>x2;
  
 raptor_prompt_variable_zzyz ="Masukkan Y1: ";
 cout << raptor_prompt_variable_zzyz;
 cin >>y1;
 
 raptor_prompt_variable_zzyz ="Masukkan Y2: ";
 cout << raptor_prompt_variable_zzyz;
 cin >>y2;
 jarak(x1,x2,y1,y2);
}
