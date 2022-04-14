#include <iostream>
#include <string> 
using namespace std;

class Bilangan{
private:
int x,y;
public:
Bilangan(){x=1;y=100;}
int rekursif(int x,int y);
void rekursif();
};
 
int Bilangan::rekursif(int x,int y){
if (x<=100){
if (x%5==0 && x%7==0){
cout<<"Hasil Bilangan Habis Di Bagi 5 dan 7 antara 1-100 : "<<x<<endl;
}
return rekursif(x+1,y);
}
}
int main(){
Bilangan z;
z.rekursif(1,100);
system("PAUSE");
return 0;
}
