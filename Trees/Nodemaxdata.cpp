#include<iostream>
#include<queue>
//#include "TreeNode.h"
#include "Takeinputprintlevel file.h"
TreeNode<int>* Nodemaxdata(TreeNode<int> *root)
{
	if(root == NULL)
	{
		cout<<"Tree is empty"<<endl;
		return NULL;
	}
	if(root->children.size() == 0)
	{
		return root;
	}
	TreeNode<int> *child = root;
	for(int i=0;i<root->children.size();i++)
	{
		TreeNode<int> *ans = Nodemaxdata(root->children[i]);
		if(ans->data > child->data)
		{
			child = ans;
		}
	}
	return child;
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	TreeNode<int> *max = Nodemaxdata(root);
	cout<<"max. data in tree = "<<max->data<<endl;
}
