#include <iostream>
using namespace std;

class Operator {
// friend ostream& operator<<(ostream&, Operator&);
// friend istream& operator>>(istream&, Operator&);
public:
	long faktor(int n);
	long faktorial(int n);
private:
	int n;
 };

 long Operator::faktor(int n) {
 long fak = 1;
 for (int i = 1; i<=n; i++){
 fak = fak * i;
}
 return fak;
 }

 long Operator::faktorial(int n){
if ((n==0) || (n==1)) {
 return(1);
}
 else{
 return (n*faktorial(n-1));
 }
}
 
main(){
	Operator x;
 	int n;
 	cout<<"Masukkan angka untuk difaktorisasikan : ";
 	cin>>n;
 	cout<<"Hasil Iteratif: "<<x.faktor(n);
 	cout<<endl;
 	cout<<"Hasil Rekursif : "<<x.faktorial(n);
 }
