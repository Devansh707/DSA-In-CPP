#include<iostream>
using namespace std;
#include"stak.cpp"
int main()
{
	Stack s;
	s.push(36);
	s.push(23);
	s.push(66);
	s.push(22);
	
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"top = "<<s.top()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"is empty = "<<s.isempty()<<endl;
}
