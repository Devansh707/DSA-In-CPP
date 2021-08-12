#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

pair<int, int> heightDiameter(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		pair<int, int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int, int> leftans = heightDiameter(root->left);
	pair<int, int> rightans = heightDiameter(root->right);
	int ld = leftans.second;
	int lh = leftans.first;
	int rd = rightans.second;
	int rh = rightans.first;
	
	pair<int, int> p;
	p.first = 1 + max(lh, rh);
	p.second = max(lh + rh, max(ld, rd));
	return p;
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
	cout<<endl;
	pair<int, int> ans = heightDiameter(root);
	cout<<"Height = "<<ans.first<<endl;
	cout<<"Diameter = "<<ans.second<<endl;
}
