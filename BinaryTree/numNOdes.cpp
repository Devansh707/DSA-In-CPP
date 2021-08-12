#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int numNodes(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return 0;
	}
	return 1 + numNodes(root->left) + numNodes(root->right);
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
	cout<<"Total num of node = "<<numNodes(root)<<endl;
}
