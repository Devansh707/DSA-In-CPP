#include<iostream>
#include<queue>
//#include "TreeNode.h"
#include "Takeinputprintlevel file.h"
void depthprint(TreeNode<int> *root , int k)
{
	if(root == NULL)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	if(k == 0)
	{
		cout<<root->data<<endl;
		return;
	}
	for(int i=0;i<root->children.size();i++)
	{
		depthprint(root->children[i] , k-1);
	}
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	int n;
	cout<<"enter depth k "<<endl;;
	cin>>n;
	depthprint(root , n);
}
