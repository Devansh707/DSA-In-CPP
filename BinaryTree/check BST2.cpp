#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1

class isBSTReturn
{
	public:
		bool isBST;
		int maximum;
		int minimum;
};
isBSTReturn isBSTfun(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		isBSTReturn output;
		output.isBST = true;
		output.maximum = INT_MIN;
		output.minimum = INT_MAX;
	}
	isBSTReturn leftoutput = isBSTfun(root->left);
	isBSTReturn rightoutput = isBSTfun(root->right);
	int maximum = max(root->data , max(leftoutput.maximum , rightoutput.maximum));
	int minimum = min(root->data , min(leftoutput.minimum , rightoutput.minimum));
	bool BSTFinal = (root->data > leftoutput.maximum) && (root->data <= rightoutput.minimum) && leftoutput.isBST &&
	rightoutput.isBST;
	isBSTReturn output;
	output.isBST = BSTFinal;
	output.maximum = maximum;
	output.minimum = minimum;
	return output;
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
	isBSTReturn result = isBSTfun(root);
	//cout<<(result.isBST ? "true" : "false")<<endl;
	cout<<result.isBST<<endl;
}

