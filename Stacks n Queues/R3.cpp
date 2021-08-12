#include<iostream>
#include "R4.cpp"
using namespace std;
int main()
{
	stackarr<int> s;
	s.push(22);
	s.push(23);
	s.push(36);
	s.push(75);
	s.push(66);
	
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.ise()<<endl;
}
