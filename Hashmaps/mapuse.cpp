#include<iostream>
#include "Hashmaps and rehashing.h"
using namespace std;
int main()
{
	Ourmap<int> map;
	for(int i=0;i<10;i++)
	{
		char c = '0' + i;
		string key = "abc";
		key = key + c;
		int value = i + 1;
		map.insert(key , value);
		cout<<map.getloadfactor()<<endl;
	}
	cout<<map.size()<<endl;
	map.remove("abc2");
	map.remove("abc7");
	
	cout<<map.size()<<endl;
	for(int i=0;i<10;i++)
	{
		char c = '0' + i;
		string key = "abc";
		key = key + c;
		cout<<key<<":"<<map.getvalue(key)<<endl;
	}
	cout<<map.size()<<endl;
}
