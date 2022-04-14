#include <iostream>
using namespace std;

moduluss_mod(int n){
	if(n<100){
		if(n%5==0 && n%7==0){
			cout<<n<<" ";   
		}
		moduluss_mod(n+1);
	}
}
