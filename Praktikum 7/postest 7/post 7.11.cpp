#include <iostream>
#include <string>

using namespace std;
class post{
	public:
		void input(){
			cout << "Nilai Sebelum diurutkan" << endl;   i =1;
   while (!(i>8))
   {
      cout<< "Masukkan Data : ";
      cin >> data[i];
      cout << "Isi Data : "<<data[i] << endl;      
	  i =i+1;
   }
		}
		void proses(){
	i =1;
   while (1)
   {
      cout << "Proses Pengurutan "<<i<<" = " << endl;      
	  if (i>8) break;
      j =1;
      while (!(j>7))
      {
         if (data[j]>data[j+1])
         {
            temp =data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
         }
         else
         {
         }
         cout << data[j] << endl;         
		 j =j+1;
      }
      i =i+1;
   }
		}
		void output(){
	cout << "Data Setelah diurutkan : " << endl;   
   i =1;
   while (!(i>8))
   {
      cout << data[i] << endl;      
	  i =i+1;
   }
		}
	private:
   int j;
   int i;
   int temp;
   int data[8];
};
int main(){
	post run;
	run.input();
	run.proses();
	run.output();
}
