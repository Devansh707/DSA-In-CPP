#include<iostream>
#include<queue>
//#include "TreeNode.h"
#include "Takeinputprintlevel file.h"
int height(TreeNode<int> *root)
{
	if(root == NULL)
	{
		cout<<"Tree is empty"<<endl;
		return 0;
	}
	int ht = 0;
	for(int i=0;i<root->children.size();i++)
	{
		int ht2 = height(root->children[i]);
		ht = max(ht,ht2);
	}
	ht += 1;
	return ht;
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	int h = height(root);
	cout<<"height of tree = "<<h<<endl;
}
