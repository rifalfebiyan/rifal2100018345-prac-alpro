#include <iostream>
#include <string>
using namespace std;

nomor_2(){
 int j;
 int k;
 int i;
 int temp;
 int b;
 int data[100] [100], array[100];
 
 cout << "Data Array 1 yang dimasukkan" << endl; i =1;
 while (!(i>3))
 {
 j =1;
 while (!(j>3))
 {
 cout << "Masukkan data array ke ["<<i<<"]["<<j<<"] :";
 cin >> data[i][j];
 j =j+1;
 }
 i =i+1;
 }
 cout << "Data Array 2 yang dimasukkan" <<endl; i =4;
 while (!(i>6))
 {
 j =4;
 while (!(j>6))
 {
 cout << "Masukkan data array ke ["<<i<<"]["<<j<<"] :";
 cin >> data[i][j];
 j =j+1;
 }
 i =i+1;
 }
 k =1;
 i =1;
 while (!(i>3))
 {
 j =1;
 while (!(j>3))
 {
 array[k] = data[i][j];
 k =k+1;
 j =j+1;
 }
 i =i+1;
 }
 b =10;
 i =4;
 while (!(i>6))
 {
 j =4;
 while (!(j>6))
 {
 array[b] = data[i][j];
 b =b+1;
 j =j+1;
 }
 i =i+1;
 }
 cout<<endl;
 cout << "Data setelah digabungkan :" ; i =1;
 while (!(i>18))
 {
 cout << array[i]; i =i+1;
 }
 i =1;
 while (!(i>18))
 {
 j =1;
 while (!(j>17))
 {
 if (array[j]>array[j+1])
 {
 temp =array[j];
 array[j] = array[j+1];
 array[j+1] = temp;
 }
 else
 {
 }
 j =j+1;
 }
 i =i+1;
 }
 cout << "\nNilai setelah diurutkan : " ; i =1;
 while (!(i>18))
 {
 cout << array[i] ; i =i+1;
 }
 return 0;
}
