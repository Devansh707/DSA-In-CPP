#include<iostream>
#include<vector>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1
vector<int>* getPath(BinarytNode<int> *root , int data)
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
	if(data < root->data)
	{
		vector<int> *l = getPath(root->left , data);
		if(l != NULL)
		{
			l->push_back(root->data);
			return l;
		}
	}
	else if(data > root->data)
	{
		vector<int> *r = getPath(root->right , data);
		if(r != NULL)
		{
			r->push_back(root->data);
			return r;
		}
	}
	return NULL;
}
int main()
{
	BinarytNode<int> *root = takeinputlevel();
	vector<int> *output = getPath(root , 7);
	for(int i = 0 ;i<output->size();i++)
	{
		cout<<output->at(i)<<endl;
	}
	delete output;
}
