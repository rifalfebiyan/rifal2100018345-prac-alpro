using namespace std;
 
class Bilangan{
	private:
		int x,y;
	public:
		Bilangan(){x=1;y=100;}
		int rekursif(int x,int y);
		void rekursif();
};

int Bilangan::rekursif(int x,int y){
	if (x<=100){
		if (x%5==0 && x%7==0){
			cout<<"Hasilnya : "<<x<<endl;
		}
		return rekursif(x+1,y);
	}
}
