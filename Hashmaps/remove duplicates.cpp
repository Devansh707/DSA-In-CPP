#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> removedup(int *a, int size)
{
	vector<int> output;
	unordered_map<int, bool> seen;
	for(int i=0;i<size;i++){
		if(seen.count(a[i]) > 0){
			continue;
		}
		seen[a[i]] = true;
		output.push_back(a[i]);
	}
	return output;
}
int main()
{
	int a = [7,6,7,3,2,36,23,1,2,1];
	vector<int> ans= removedup(a,10);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
