#include<iostream>
using namespace std;

int main(){
	int k=0,b=9,temp, i,j;
	int c[50], data[50][50];
	for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Masukan data array ke["<<i<<"]["<<j<<"] : ";
            cin>>data[i][j];
		}
	}
	cout<<"Data Array 1 yang dimasukan :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<data[i][j]<<" ";
		}
		cout<<endl;
	}
    cout<<endl;
	for(int i=3;i<6;i++){
        for(int j=3;j<6;j++){
            cout<<"Masukan data array ke["<<i-3<<"]["<<j-3<<"] : ";
            cin>>data[i][j];
		}
	}
	cout<<"Data Array 2 yang dimasukan :"<<endl;
    for(int i=3;i<6;i++){
        for(int j=3;j<6;j++){
            cout<<data[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        	c[k]=data[i][j];
			k=k+1;
        }
    }
    for(int i=3;i<6;i++){
        for(int j=3;j<6;j++){
        	c[b]=data[i][j];
			b=b+1;
        }
    }
            
    cout<<"\nData setelah digabungkan : "<<endl<<"[";
    for(int i=0;i<18;i++){
    	cout<<c[i]<<",";
	}
	cout<<"]"<<endl;
	
	i =0;
    while (1){    
	  	if (i>17) break;
      	j =0;
      	while (!(j>16)){
        	if (c[j]>c[j+1]){
            	temp =c[j];
            	c[j] = c[j+1];
            	c[j+1] = temp;
    		}
         	else {}        
			j =j+1;
      	}
      i =i+1;
    }
    cout << "\nData setelah diurutkan : " << endl;
    cout<<"[";
    for(int i=0;i<18;i++){
    	cout<<c[i]<<",";
	}
	cout<<"]"<<endl;
	
	return 0;
}
