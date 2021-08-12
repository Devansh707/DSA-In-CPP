#include<iostream>
using namespace std;

template <typename T, typename V>
class Pair
{
	T x;
	V y;
	public:
		void setx(T x)
		{
			this->x = x;
		}
		T getx(){
			return x;
		}
		void sety(V y){
			this->y = y;
		}
		V gety(){
			return y;
		}
};
int main()
{
	Pair<int,int> p1;
	p1.setx(23);
	p1.sety(36);
	cout<<"Devansh = "<<p1.getx()<<" "<<"Manjima = "<<p1.gety()<<endl;
}
