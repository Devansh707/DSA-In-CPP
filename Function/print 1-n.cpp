#include<iostream>
using namespace std;
void print (int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter limit:"<<endl;
	cin>>n;
	print(n);
};
