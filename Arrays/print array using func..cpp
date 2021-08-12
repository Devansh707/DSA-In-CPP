#include<iostream>
using namespace std;
void print (int input[], int n)
{
	cout<<"array elements are:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<input[i]<<endl;
	}
}
int main()
{
	int input[100],n;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	cout<<"adrres location of input[] of index 0: "<<input<<endl;
	print(input,n);
}
