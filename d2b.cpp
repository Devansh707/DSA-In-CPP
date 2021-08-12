#include<iostream>
using namespace std;
int main()
{
	int n,ld;
	long pv=1,a=0;
	cout<<"enter n:"<<endl;
	cin>>n;
	while(n>0)
	{
		ld=n%2;
		a=a+(ld*pv);
		n=n/2;
		pv=pv*10;
	}
	cout<<a;
	return 0;
}
