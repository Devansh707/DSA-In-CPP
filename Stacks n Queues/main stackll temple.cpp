#include<iostream>
#include "stackll temple.cpp"
using namespace std;
int main(){
	stack <int> s;
	s.push(22);
	s.push(23);
	s.push(36);
	s.push(94);
	s.push(75);
	s.display();
	cout<<"size = "<<s.size()<<endl;
	cout<<"popped element = "<<s.pop()<<endl;
	cout<<"size = "<<s.size()<<endl;
	cout<<"popped element = "<<s.pop()<<endl;
	cout<<"size = "<<s.size()<<endl;
	s.display();
}
