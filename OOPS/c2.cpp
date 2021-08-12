#include<iostream>
using namespace std;

class student 
{
	int age;
	 public:
	 	int roll;
	 	student ()
	 	{
	 		cout<<"default constructor called :"<<endl;
		}
		
		student (int a, int roll)
		{
			cout<<"parametrized constructor called :"<<endl;
			this->age=a;
			this->roll=roll;
		}
		~student()
		{
			cout<<"destructor called :"<<endl;
		}
		void print()
		{
			cout<<"age = "<<age<<" roll = "<<roll<<endl;
		}
};
int main()
{
	student s1(20,23);
	s1.print();
	student s2(19,36);
	s2.print();
	student s3(s2);
	s3.print();
	student s4;
	s4=s1;
	s4.print();
	student *s5 = new student;
	*s5=s2;
	s5->print();
	student *s6 = new student(19,10);
	s6->print();
	delete s5;
	delete s6;
}
