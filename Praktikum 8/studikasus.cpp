#include<iostream>
using namespace std;

class array2{
	public:
	void  input(){
		 cout<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"|      Nama Barang    |       Stok      |       Harga     |"<<endl;
    cout<<"==========================================================="<<endl;
    cout<<"|      samsung evo    |      ";for(i=0;i<2;i++){
												for(j=0;j<1;j++){
													cout<<samsung_evo[i][j]<<"         |  ";
												}
											}
											cout<<endl;
	cout<<"|      SanDisk_16gb    |      ";for(i=0;i<2;i++){
												for(j=0;j<1;j++){
													cout<<SanDisk_16gb[i][j]<<"         |  ";
												}
											}
											cout<<endl;	
	cout<<"|      Logitech_M170    |      ";for(i=0;i<2;i++){
												for(j=0;j<1;j++){
													cout<<Logitech_M170[i][j]<<"         |  ";
												}
											}
											cout<<endl;	
	cout<<"|      Wd_Green120gb    |      ";for(i=0;i<2;i++){
												for(j=0;j<1;j++){
													cout<<Wd_Green120gb[i][j]<<"         |  ";
												}
											}
											cout<<endl;	
	cout<<"|      garmin_VenuSQ    |      ";for(i=0;i<2;i++){
												for(j=0;j<1;j++){
													cout<<garmin_VenuSQ[i][j]<<"         |  ";
												}
											}
											cout<<endl;	
	cout<<"|      EpsonL3210AIO    |      ";for(i=0;i<2;i++){
												for(j=0;j<1;j++){
													cout<<EpsonL3210AIO[i][j]<<"         |  ";
												}
											}
											cout<<endl;	
	}	
	void proses(){
	samsung=samsung*30;
	sandisk=sandisk*45;
	Logitec=Logitec*55;
	Wd=Wd*23;
	garmin=garmin*12;
	epson=epson*14;
	}
	void  output(){
	cout<<"==========================================================="<<endl;
	cout<<"|           TOTAL        |      \t\t"<<samsung+sandisk+Logitec+Wd+garmin+epson<<"   |"<<endl;
	cout<<"===========================================================";
	}
	private: 
	int i, j, b;
	int samsung_evo[2][2] = {{30},{200000}};
	int SanDisk_16gb[2][2] = {{45},{60000}};
	int Logitech_M170[2][2] = {{55},{120000}};
	int Wd_Green120gb[2][2] = {{23},{400000}};
	int garmin_VenuSQ[2][2] = {{12},{3100000}};
	int EpsonL3210AIO[2][2] = {{14},{2500000}};
	int samsung=200000,sandisk=60000,Logitec=120000;
	int Wd=400000, garmin=3100000, epson=2500000;
};
int main(){
	array2 run;
	run.input();
	run.proses();
	run.output();
}
	
