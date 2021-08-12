#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(23);
	v.push_back(36);
	v.push_back(75);
	v.push_back(94);
	v.push_back(66);
	cout<<"Size = "<<v.size()<<endl;
	cout<<"Capacity = "<<v.capacity()<<endl;
	for(int i = 0;i<v.size();i++)
	{
		cout<<v.at(i)<<endl;
	}
	v.pop_back();
	cout<<"Size = "<<v.size()<<endl;
	cout<<"Capacity = "<<v.capacity()<<endl;
	for(int i = 0;i<v.size();i++)
	{
		cout<<v.at(i)<<endl;
	}
}
