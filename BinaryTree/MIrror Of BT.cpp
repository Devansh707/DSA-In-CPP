#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

void Mirror(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return;
	}
	BinarytNode<int> *temp;
	Mirror(root->left);
	Mirror(root->right);
	temp = root->left;
	root->left = root->right;
	root->right = temp;
}
int main()
{
	BinarytNode<int> * root = takeinputlevel();
	printBTlevel(root);
	cout<<"Mirror Of The Binary Tree"<<endl;
	Mirror(root);
	printBTlevel(root);
}
