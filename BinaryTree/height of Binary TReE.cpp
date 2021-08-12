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
	return max(height(root->left) , height(root->right)) + 1;
}

int main()
{
	BinarytNode<int> *root = takeinputlevel();
	cout<<"height of binary Tree = "<<height(root)<<endl;
	printBTlevel(root);
}
