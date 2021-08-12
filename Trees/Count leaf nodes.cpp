#include<iostream>
#include<queue>
//#include "TreeNode.h"
#include "Takeinputprintlevel file.h"
int numleafnodes(TreeNode<int> *root)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root->children.size() == 0)
	{
		return 1;
	}
	int sum = 0;
	for(int i = 0;i<root->children.size();i++)
	{
		sum += numleafnodes(root->children[i]);
	}
	return sum;
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
	int n = numleafnodes(root);
	cout<<"num. of leaf nodes in tree = "<<n<<endl;
}
