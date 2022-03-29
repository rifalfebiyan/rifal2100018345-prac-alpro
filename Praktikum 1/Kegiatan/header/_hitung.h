#include <iostream>
#include <conio.h>
using namespace std;
class Hitung {
friend ostream& operator<<(ostream&, const Hitung&);
friend istream& operator>>(istream&, Hitung&);
public:
Hitung();
void hitung_jumlahnya(){ jumlah = (a + b + c); }
private:
int a,b,c;
int jumlah;
};
