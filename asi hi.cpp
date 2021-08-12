#include<iostream>
using namespace std;
int main()
{
	int **y;
	int a;
	cout<<"enter size";
	int *x = new int[a];
	for(int i=0;i<a;i++){
		cin>>x[i];
	}
	y = &x;
	cout<<y<<endl;
	cout<<**y<<endl;
}
