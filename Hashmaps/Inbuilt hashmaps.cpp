#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
	unordered_map<string,int> ourmap;
	pair<string,int> p("abc",1);
	ourmap.insert(p);
	ourmap["def"] = 2;
	
	cout<<"size : "<<ourmap.size()<<endl;
	cout<<ourmap.at("def")<<endl;
	cout<<ourmap["abc"]<<endl;
	
	cout<<ourmap["ghi"]<<endl;
	cout<<"size : "<<ourmap.size()<<endl;
	
	if(ourmap.count("ghi") > 0){
		cout<<"ghi is present"<<endl;
	}
	ourmap.erase("ghi");
	cout<<"size : "<<ourmap.size()<<endl;
	if(ourmap.count("ghi") == 0){
		cout<<"ghi is not present"<<endl;
	}
}
