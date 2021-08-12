#include<iostream>
using namespace std;

class student
{
	public:
		char name[100];
		int age,roll;
};
int main()
{
	int n;
	cout<<"enter no. of students : "<<endl;
	cin>>n;
	student *s= new student ;
	for(int i=0;i<n;i++)
		{
		cout<<"enter info of "<<i+1<<" student";
		cout<<endl<<"enter name:";
		cin>>s[i]->name;
		cout<<"enter age :";
		cin>>s[i]->age;
		cout<<"enter roll no. :";
		cin>>s[i]->roll;
	}
	cout<<endl<<"required info are : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"name:"<<s[i]->name;
		cout<<endl<<"age :"<<s[i]->age;
		cout<<endl<<"roll no. :"<<s[i]->roll;
		cout<<endl;
	}
}
