#include<iostream>
#include<conio.h>
using namespace std;

class Sorting{
	friend istream& operator>>(istream& in, Sorting& a);
	friend ostream& operator<<(ostream& out,Sorting& a);
	
	public:
		void baca_data();
		void cetak_data();
		void bubble_sort();
		void insertion_sort();
		void selection_sort();
		int pencarianBiner(int low, int high);
	private:
		void minimum(int, int, int&);
		void tukar(int&, int&);
		void cetakBaris(int low, int high, int middle);
		int data[10], n;
};

istream& operator>>(istream& in, Sorting& a)
{
	cout<<"Banyak Data : ";
	in>>a.n;
	for(int i=0; i<a.n; i++)
	{
		cout<<"Data Ke-"<<i+1<<" : ";
		in>>a.data[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Sorting& a)
{
	for(int i=0; i<a.n; i++)
	{
		out<<a.data[i]<<" ";
		out<<"\n";
	}
	return out;
}
void Sorting::minimum(int dari, int n, int&tempat)
{
	int min = data[dari];
	tempat = dari;
	for(int i=dari+1; i<n; i++)
	{
		if(data[i]<min)
		{
			min=data[i];
			tempat=i;
			cout<<data[i];
		}
	}
}
void Sorting::tukar(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Sorting::insertion_sort()
{
	int i,j, temp;
	cout<<endl;
	cout<<"Data pertama : "<<data[0]<<endl;
	for(j=1; j<n; j++)
	{
		temp=data[j];
		cout<<endl;
		cout<<"Data Ke- "<<j+1<<" Yaitu "<<data[j]<<" Diambil dari meja "<<endl;
		cout<<"Dilakukan penggeseran elemen : "<<endl;
		for(i=j-1;(i>=0)&&(data[i]>temp); i--)
		{
			cout<<"Data pada posisis ke- ["<<i+1<<"] digeser ke posisi ["<<i+2<<"]"<<endl;
			data[i+1]=data[i];
		}
		cout<<"Data baru masuk pada posisi ke-["<<i+2<<"]"<<endl;
		data[i+1]=temp;
		cout<<"Data saat ini adalah : ";
		cout<<endl;
		for(int k=0; k<=j; k++)
		{
			cout<<data[k]<<" ";
		}
		getch();
	}
}
void Sorting::selection_sort()
{
	int t;
	for(int i=0; i<n; i++)
	{
		minimum(i, n, t);
		tukar(data[i],data[t]);
	}
}

int Sorting::pencarianBiner(int low, int high)
{
	int middle;
	int kunciPencarian;
	while(low<=high)
	{
		middle=(low+high)/2;
		if(kunciPencarian==data[middle])
		{
			return middle;
		}
		else if(kunciPencarian<data[middle])
		{
			high=middle-1;
		}
		else
		{
			low=middle+1;
		}
	}
	return -1;
}

int main()
{
	Sorting x;
	cin>>x;
	x.insertion_sort();
	cout<<endl;
	cout<<"Hasil Akhir adalah : ";
	cout<<endl;
	cout<<x;
}

