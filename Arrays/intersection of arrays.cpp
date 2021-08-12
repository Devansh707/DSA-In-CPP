#include<iostream>
#include<climits>
using namespace std;
void intersection(int in1[],int in2[],int s1,int s2)
{
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			if(in1[i]==in2[j])
			{
				cout<<in1[i]<<endl;;
				in2[j]==INT_MIN;
				break;
			}
		}
	}
}
int main()
{
	int a1[100],a2[100],s1,s2;
	cout<<"enter size of array 1: "<<endl;
	cin>>s1;
	cout<<"enter array 1 : "<<endl;
	for(int i=0;i<s1;i++)
	{
		cin>>a1[i];
	}
	cout<<"enter size of array 2 :"<<endl;
	cin>>s2;
	cout<<"enter array 2 :"<<endl;
	for(int i=0;i<s2;i++)
	{
		cin>>a2[i];
	}
	cout<<"intersection of both arrays are: "<<endl;
	intersection(a1,a2,s1,s2);
}
