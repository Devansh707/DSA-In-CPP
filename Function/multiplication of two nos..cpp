#include<iostream>
using namespace std;
int multiply (int a, int b)
{
	int c;
	c=a*b;
	return (c);
}
int main()
{
	int a,b;
	cout<<"enter two  nos:"<<endl;
	cin>>a>>b;
	int c=multiply(a,b);
	cout<<a<<" * "<<b<<" = "<<c<<endl;
}
