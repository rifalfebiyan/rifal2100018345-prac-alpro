#inclue <iostream>
using namespace std;

void moduluss(int n){
	if(n<100){
		if(n%5==0 && n%7==0){
			cout<<n<<" ";   
		}
		moduluss(n+1);
	}
}
