#include<iostream>
using namespace std;

class student
{
	public:
		int age;
		int const roll;
		int &x;
		
		student (int r, int a) : roll(r), age(a), x(this->age){
		}
		
		void print()
		{
			cout<<"age = "<<this->age<<"roll = "<<this->roll<<endl<<&x;
			
		}
};
int main()
{
	student s1(23,52);
	s1.print();
	
}
