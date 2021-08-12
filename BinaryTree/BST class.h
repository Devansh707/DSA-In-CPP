#include<iostream>
#include<vector>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// i/p = 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1
class BST
{
	BinarytNode<int> *root;
	public:
		BST()
		{
			this->root = NULL;
		}
		~BST(){
			delete root;
		}
	private:
		bool hasdata(int data , BinarytNode<int> *node) // creating helper func. to search func.
		{
			if(node == NULL)
			{
				return false;
			}
			if(node->data == data)
			{
				return true;
			}
			else if(data < node->data)
			{
				return hasdata(data , node->left);
			}
			else if(data > node->data)
			{
				return hasdata(data , node->right);
			}
		}
	public:
		bool search(int data)
		{
			return hasdata(data , root);
		}
};













