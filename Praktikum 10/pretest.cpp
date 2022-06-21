#include <iostream>
using namespace std;

class node {
	public :
		int data;
 		node *berikut;
};

int main() {
	node *baru;
	baru = new node;
	baru->data = 5;
	baru->berikut = NULL;
	cout << "Isi data node baru adalah : " << baru->data << endl;
	node *lain;
	lain = new node;
	lain->data = 6;
	lain->berikut = NULL;
	cout << "Isi data node lain adalah : " << lain->data << endl;
	baru->berikut = lain;
	node *kepala = baru;
	node *jalan = kepala;
	int i = 1;
	while (jalan != NULL) {
		i++;
		jalan = jalan->berikut;
	}
	cout<<"Banyaknya elemen linklist : "<<i-1<<endl;	
}
