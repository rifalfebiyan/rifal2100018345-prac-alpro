#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
class node{
    public:
		string data;
    	node *berikut;
};
           
int main(int argc, char *argv[]){
    
    // ISI NODE 1
    node *baru;
    baru = new node;
    string satu;
    cout<<"NAMA -> 1: ";
    cin>>satu;
    baru -> data = satu;
    baru -> berikut = NULL;
    
	// ISI NODE 2
    node *lain;
    lain = new node;
    string dua;
    cout<<"NIM  -> : ";
    cin>>dua;
    lain->data=dua;
    lain->berikut=NULL;
    // ISI NODE  3
    node *a;
    a = new node;
    string tiga;
    cout<<"NAMA -> 2  : ";
    cin>>tiga;
    a->data=tiga;
    a->berikut=NULL;
    // ISI NODE  4
    node *b;
    b = new node;
    string empat;
    cout<<"NIM -> 2 : ";
    cin>>empat;
    b->data=empat;
    b->berikut=NULL;
    // ISI NODE  5
	node *c;
    c = new node;
    string lima;
    cout<<"NAMA -> 3 : ";
	cin>>lima;
    c->data = lima;
    c->berikut = NULL;
    // ISI NODE 6
    node *d;
    d = new node;
    string enam;
    cout<<"NIM -> 3 : ";
	cin>>enam;
    d->data = enam;
    d->berikut = NULL;
    //aaaaaaaa
    node *e;
    e = new node;
    string tujuh;
    cout<<"NAMA -> 4 : ";
	cin>>tujuh;
    e->data = tujuh;
    e->berikut = NULL;
    //aaaaaaaaaaa
    node *f;
    f = new node;
    string delapan;
    cout<<"NIM-> 4 : ";
	cin>>delapan;
    f->data = delapan;
    f->berikut = NULL;
    //dddddddddd
    node *g;
    g = new node;
    string sembilan;
    cout<<"NAMA-> 5 : ";
	cin>>sembilan;
    g->data = sembilan;
    g->berikut = NULL;
    //ahahahaha
     node *h;
    h = new node;
    string puluh;
    cout<<"NIM-> 5 : ";
	cin>>puluh;
    h->data = puluh;
    h->berikut = NULL;
   
    // ISI DATA NODE LAIN DICERTAK DARI NODE BARU -> 2
    baru->berikut = lain;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<baru->berikut->data<<endl;
    // ISI DATA NODE LAIN DICERTAK DARI NODE BARU -> 3
	lain->berikut = a;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<lain->berikut->data<<endl;
  // ISI DATA NODE LAIN DICERTAK DARI NODE BARU -> 4
	a->berikut = b;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<a->berikut->data<<endl;
    // ISI DATA NODE LAIN DICERTAK DARI NODE BARU -> 5
    b->berikut = c;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<b->berikut->data<<endl;
    //
    c->berikut = d;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<c->berikut->data<<endl;
    //
    d->berikut = e;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<d->berikut->data<<endl;
    //
    e->berikut = f;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<e->berikut->data<<endl;
    //
    f->berikut = g;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<f->berikut->data<<endl;
    //
    g->berikut = h;
    cout<<"Isi data node lain dicetak dari node baru adalah : ";
    cout<<g->berikut->data<<endl;
//==========================================================
	// NODE PERTAMA DARI POINTER
    node *kepala = baru;
    cout<<"Mencetak node pertama dari pointer : ";
    cout<<kepala->data<<endl;
    	// NODE KEDUA DARI POINTER
    cout<<"Mencetak node kedua dari pointer : ";
    cout<<kepala->berikut->data<<endl;
		// NODE KETIGA DARI POINTER
	cout<<"Mencetak node ketiga dari pointer :";
    cout<<lain->berikut->data<<endl;
    	// NODE KEEMPAT DARI POINTER
	cout<<"Mencetak node keempat dari pointer :";
    cout<<a->berikut->data<<endl;
    	// NODE KELIMA DARI POINTER
    cout<<"Mencetak node kelima dari pointer :";
    cout<<b->berikut->data<<endl;
    //
    cout<<"Mencetak node keenam dari pointer :";
    cout<<c->berikut->data<<endl;
    //
     cout<<"Mencetak node keenam dari pointer :";
    cout<<d->berikut->data<<endl;
    //
    cout<<"Mencetak node keenam dari pointer :";
    cout<<e->berikut->data<<endl;
    //
    cout<<"Mencetak node keenam dari pointer :";
    cout<<f->berikut->data<<endl;
    //
    cout<<"Mencetak node keenam dari pointer :";
    cout<<g->berikut->data<<endl;
    //
    
    
    //PROSES PERULANGAN
    cout<<"Menggunakan perulangan untuk mencetak setiap data pada rantai"<<endl;
	node *jalan = kepala;
	int i = 1;
	while(jalan !=NULL){
		cout<<"data ke-"<<i<<" > "<<jalan->data<<endl; 
		i++;
		jalan = jalan->berikut;
    }
    
	//BANYAK ELEMEN LINKLIST
    cout<<"Banyak Data : "<<i-1<<endl;
    
    return 0;
}
