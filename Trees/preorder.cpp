#include<iostream>
#include<queue>
//#include "TreeNode.h"
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0 - tree input
#include "Takeinputprintlevel file.h"
void preorder(TreeNode<int> *root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	for(int i=0;i<root->children.size();i++)
	{
		preorder(root->children[i]);
	}
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	cout<<"preorder display = ";
	preorder(root);
}
