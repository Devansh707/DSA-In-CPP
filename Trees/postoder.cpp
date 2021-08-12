#include<iostream>
#include<queue>
//#include "TreeNode.h"
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0 - tree input
#include "Takeinputprintlevel file.h"
void postorder(TreeNode<int> *root)
{
	if(root == NULL)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	if(root->children.size() == 0)
	{
		cout<<root->data<<" ";
		return;
	}
	for(int i =0;i<root->children.size();i++)
	{
		postorder(root->children[i]);
	}
	cout<<root->data<<" ";
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	cout<<"Post order printing = ";
	postorder(root);
}
