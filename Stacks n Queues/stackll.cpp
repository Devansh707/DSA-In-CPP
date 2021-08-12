#include<iostream>
#include "class of stackLL.cpp"
using namespace std;
int main()
{
	stackll s;
	s.push(22);
	s.push(23);
	s.push(36);
	s.push(75);
	s.display();
	cout<<"popped element = "<<s.pop()<<endl;
	cout<<"size = "<<s.size()<<endl;
	cout<<"popped element = "<<s.pop()<<endl;
	s.display();
}
