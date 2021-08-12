#include<iostream>
#include "Binarytnode.h"
using namespace std;

BinarytNode<int>* takeinput()
{
	int rootdata;
	cout<<"enter data"<<endl;
	cin>>rootdata;
	BinarytNode<int> *root = new BinarytNode<int> (rootdata);
	if(rootdata == -1)
	{
		return NULL;
	}
	BinarytNode<int> *leftchild = takeinput();
	BinarytNode<int> *rightchild = takeinput();
	root->left = leftchild;
	root->right = rightchild;
	return root;
}

void printBT(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return;
	}
	cout<<root->data<<" : ";
	if(root->left != NULL)
	{
		cout<<"L"<<root->left->data<<",";
	}
	if(root->right != NULL)
	{
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	printBT(root->left);
	printBT(root->right);
}
int main()
{
	/*
	BinarytNode<int> *root = new BinarytNode<int> (1);
	BinarytNode<int> *node1 = new BinarytNode<int> (2);
	BinarytNode<int> *node2 = new BinarytNode<int> (3);
	root->left = node1;
	root->right = node2;
	*/
	BinarytNode<int> *root = takeinput();
	printBT(root);
}
