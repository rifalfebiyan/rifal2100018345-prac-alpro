#include <iostream>
#include <stdlib.h>

using namespace std;
class node{
    public:
		int data;
    	node *berikut;
};
           
int main(int argc, char *argv[]){
    
    // ISI NODE 1
    node *baru;
    baru = new node;
    int satu;
    cout<<"DATA NODE -> 1 : ";
    cin>>satu;
    baru -> data = satu;
    baru -> berikut = NULL;
    
	// ISI NODE 2
    node *lain;
    lain = new node;
    int dua;
    cout<<"DATA NODE -> 2 : ";
    cin>>dua;
    lain->data=dua;
    lain->berikut=NULL;
    // ISI NODE  3
    node *a;
    a = new node;
    int tiga;
    cout<<"DATA NODE -> 3 : ";
    cin>>tiga;
    a->data=tiga;
    a->berikut=NULL;
    // ISI NODE  4
    node *b;
    b = new node;
    int empat;
    cout<<"DATA NODE -> 4 : ";
    cin>>empat;
    b->data=empat;
    b->berikut=NULL;
    // ISI NODE  5
	node *c;
    c = new node;
    int lima;
    cout<<"DATA NODE -> 5 : ";
	cin>>lima;
    c->data = lima;
    c->berikut = NULL;
   
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
    
    //PROSES PERULANGAN
    cout<<"Menggunakan perulangan untuk mencetak setiap data pada rantai"<<endl;
	node *jalan = kepala;
	int i = 1;
	while(jalan !=NULL){
		cout<<"data ke-"<<i<<" > "<<jalan->data<<endl; 
		i++;
		jalan = jalan->berikut;
    }
        
    cout<<"mencetak node pertama dari pointer :";
    cout<<kepala->data<<endl;
    cout<<"mencetak node kedua dari pointer :";
    cout<<kepala->berikut->data<<endl;
	//BANYAK ELEMEN LINKLIST
    cout<<"Banyak Data : "<<i-1<<endl;
    
    return 0;
}
