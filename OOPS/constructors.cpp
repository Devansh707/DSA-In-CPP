#include<iostream>
using namespace std;;

class student
{
	int age;
	public:
		int roll;
		
		student()
		{
			cout<<"default constructor called"<<endl;
		}
		student(int roll)
		{
			cout<<"parametrized constructor 1 called"<<endl;
			this->roll=roll;
		}
		
		student(int a,int r)
		{
			cout<<"parametrized contructor 2 called"<<endl;
			this->age=a;
			this->roll=r;
		}
		void print()
		{
			cout<<"age = "<<age<<"  "<<"roll = "<<roll<<endl;
		}
};
int main()
{
	student s1;
	s1.print();
	
	student *s7= new student;
	s7->print();
	
	student *s8 = new student (19,75);
	s8->print();
	
	student s2(20,23);
	student s3(19,36);
	student s4(19,10);
	
	student s5(94);
	
	s2.print();
	s3.print();
	s4.print();
	s5.print();
}
