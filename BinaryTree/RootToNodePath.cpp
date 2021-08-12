#include<iostream>
#include<vector>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1

vector<int>* roottonode(BinarytNode<int>* root, int data)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root->data == data)
	{
		vector<int> *output = new vector<int>();
		output->push_back(root->data);
		return output;
	}
	vector<int> *leftoutput = roottonode(root->left , data);
	if(leftoutput != NULL)
	{
		leftoutput->push_back(root->data);
		return leftoutput;
	}
	vector<int> *rightoutput = roottonode(root->right , data);
	if(rightoutput != NULL)
	{
		rightoutput->push_back(root->data);
		return rightoutput;
	}else{
		return NULL;
	}
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	vector<int> *output = roottonode(root , 8);
	for(int i = 0;i<output->size();i++)
	{
		cout<<output->at(i)<<endl;
	}
	delete output;
}
