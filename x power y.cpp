#include<iostream>
using namespace std;
int main()
{
	int c=1,a=1,x,y;
	cin>>x>>y;
	while(a<=y)
	{
		c=c*x;
		a=a+1;
	}
	cout<<c<<endl;
}
