#include<iostream>
#include<queue>
//#include "TreeNode.h"
#include "Takeinputprintlevel file.h"
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0 - tree input
bool containsX(TreeNode<int> *root , int x)
{
	if(root == NULL)
	{
		cout<<"tree is empty"<<endl;
		return NULL;
	}
	if(x == root->data)
	{
		return true;
	}
	for(int i = 0; i < root->children.size() ; i++)
	{
		bool a = containsX(root->children[i] , x);
		if(a)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	int n;
	cout<<"enter the value to be found :"<<endl;
	cin>>n;
	bool s = containsX(root , n);
	if(s)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}
