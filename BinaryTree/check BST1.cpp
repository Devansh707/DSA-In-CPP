#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int maximum(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return INT_MIN;
	}
	return max(root->data , max(maximum(root->left) , maximum(root->right)));
}
int minimum(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return INT_MAX;
	}
	return min(root->data , min(minimum(root->left) , minimum(root->right)));
}
bool isBST(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return true;
	}
	int leftmax = maximum(root->left);
	int rightmin = minimum(root->right);
	bool output = (root->data > leftmax) && (root->data <= rightmin) && isBST(root->left) && isBST(root->right);
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
	cout<<(isBST(root)?"true":"false")<<endl;
}
