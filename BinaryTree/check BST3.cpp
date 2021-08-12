#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1
bool isBST3(BinarytNode<int> *root , int min = INT_MIN, int max = INT_MAX)
{
	if(root == NULL)
	{
		return true;
	}
	if(root->data < min || root->data > max)
	{
		return false;
	}
	bool isleftok = isBST3(root->left , min, root->data - 1);
	bool isrightok = isBST3(root->right , root->data , max);
	return isleftok && isrightok;
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
	cout<<(isBST3 ? "true" : "false")<<endl;
}
