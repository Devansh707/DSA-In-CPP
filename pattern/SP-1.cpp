#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"1"<<endl;
	for(i=1;i<=(n-1);i++)
	{
		cout<<"1";
		for(j=1;j<=(i-1);j++)
		{
			cout<<"2";
		}
		cout<<"1"<<endl;
	}
}
