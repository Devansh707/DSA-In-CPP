#include<iostream>
using namespace std;

class student
{
	int age;
	public:
		int roll;
		
		int getage(int a, int pass)
		{
			if(pass!=123)
			{
				return (-1);
			}
			age=a;
		}
		void printf()
		{
			cout<<"Age = "<<age<<" Roll no. = "<<roll<<endl;
		}
};
int main()
{
	int a,n;
	cout<<"enter password and age: "<<endl;
	cin>>n>>a;
	student s;
	s.getage(a,n);
	s.roll=23;
	s.printf();	
}
