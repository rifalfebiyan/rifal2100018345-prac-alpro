#include <iostream>
#include <conio.h>
using namespace std;

class array{
	public:
		input();
		array_2();
		sorting();
	private:
		int a[10][10];
		int aray[10];
		int cur,cur2,z,temp;
};

array::input(){
	cout<<"\t\nMasukkan Data : ";
	cin>>z;
	
	for(int i=0;i<z;i++)
	for(int j=0;j<z;j++)
	{
		cout<<"\tData["<<i<<"]["<<j<<"] : ";
		cin>>a[i][j];
	}
}

array::array_2(){
	 cout<<"\n\tData sebelum di Sorting : \t"<<endl;
	for (int i=0; i<z; i++){
		for (int j=0; j<z; j++ ){
			cout<< "\t";
			cout<< a[i][j]<<" ";
		}
		cout<< endl;
	} 
}


array::sorting(){
	cout<<"\n\tData setelah di Sorting : \t"<<endl;
	 for(int i=0;i<z;i++)
    for(int j=0;j<z;j++)
    {
        cur=i;
        cur2=j;
        for(int k=0;k<z;k++)
        for(int l=0;l<z;l++)
              { 
                   if(a[cur][cur2]<a[k][l])
                   { 
                        cur=k;
                        cur2=l;
                   }
                   temp=a[i][j];     
        a[i][j]=a[cur][cur2];
        a[cur][cur2]=temp;
              }   
    }   
    for(int i=0;i<z;i++)
    {
    for(int j=0;j<z;j++)
    {
       cout<<"\t";
       cout<<" "<<a[i][j];
    }
   cout<<endl;
} 
}

int main(){
	array run;
	run.input();
	run.array_2();
	run.sorting();
	return 0;
}
