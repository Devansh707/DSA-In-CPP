#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int height(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return 0;
	}
	return 1 + max(height(root->left) , height(root->right));
}

int diameter(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return 0;
	}
	int option1 = height(root->left) + height(root->right);
	int option2 = diameter(root->left);
	int option3 = diameter(root->right);
	return max(option1, max(option2 , option3));
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
	int d = diameter(root);
	cout<<"diameter of BT = "<<d<<endl;
}
