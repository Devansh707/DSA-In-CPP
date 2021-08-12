#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

bool isNodepresent(BinarytNode<int> *root , int x)
{
	if(root == NULL)
	{
		return false;
	}
	if(root->data == x)
	{
		return true;
	}
	bool a = isNodepresent(root->left , x);
	if(a)
	{
		return true;
	}
	a = isNodepresent(root->right , x);
	if(a)
	{
		return true;
	}
	return false;
}

int main()
{
	BinarytNode<int> *root = takeinputlevel();
	int n;
	cout<<"enter the node to be found "<<endl;
	cin>>n;
	printBTlevel(root);
	cout<<((isNodepresent(root , n))?"true":"false")<<endl; 
}
