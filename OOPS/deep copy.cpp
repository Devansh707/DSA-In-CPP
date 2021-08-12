#include<iostream>
using namespace std;
#include<cstring>

class student
{
	int age;
	
	int roll;
	public:
		char *name;
		student(int age, char *name,int roll)
		{
			this->age=age;
			//this->name=name;  shallow copy
			//deep copy
			this->name= new char (strlen(name)+1);
			strcpy(this->name,name);
			this->roll=roll;
		}
		student (student const &s)
		{
			this->age=s.age;
			this->name=new char (strlen(s.name)+1);
			strcpy(this->name,s.name);
			this->roll=s.roll;
		}
	
		void print()
		{
			cout<<"name = "<<name<<endl;
			cout<<"age = "<<age<<endl;
			cout<<"roll = "<<roll<<endl;
		}
};
int main()
{
	char name[]="Devansh";
	student s1(20,name,23);
	s1.print();
	student s2(s1);
	s2.name[0]='R';
	s2.print();
	s1.print();
	/*
	student s2(19,name,36);
	s2.print();
	s1.print();
	*/
}
