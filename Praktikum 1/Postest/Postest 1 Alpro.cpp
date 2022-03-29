#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
 string raptor_prompt_variable_zzyz;

 int x1,x2,y1,y2;
 float a,b,jarak;

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
 a=(x2-x1)*(x2-x1);
 b=(y2-y1)*(y2-y1);
 jarak=sqrt(a+b);

 cout << "Hasil dari jarak A dan B adalah: "<<jarak << endl;
 return 0;
}
