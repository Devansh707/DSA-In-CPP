#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

BinarytNode<int>* buildTreeHelper(int *pre, int *in, int preS, int preE, int inS, int inE)
{
	if(inS > inE)
	{
		return NULL;
	}
	int rootdata = pre[preS];
	int rootindex = -1;
	for(int i =inS ;i<= inE;i++)
	{
		if(in[i] == rootdata)
		{
			rootindex = i;
			break;
		}
	}
	int lpreS = preS + 1;
	int rpreE = preE;
	int rinE = inE;
	int linS = inS;
	int linE = rootindex - 1;
	int rinS = rootindex + 1;
	int lpreE = linE - linS + lpreS;
	int rpreS = lpreE + 1;
	BinarytNode<int> *root = new BinarytNode<int>(rootdata);
	root->left = buildTreeHelper(pre, in , lpreS, lpreE, linS, linE);
	root->right = buildTreeHelper(pre, in ,rpreS, rpreE, rinS, rinE);
	return root;
}


BinarytNode<int> *buildTree(int *pre, int preLength, int *in, int inLength)
{
	return buildTreeHelper(pre, in, 0, preLength - 1, 0, inLength - 1);
}

int main()
{
	int size;
	cout<<"enter the size :"<<endl;
	cin>>size;
	int *pre = new int [size];
	int *in = new int[size];
	for(int i = 0;i<size;i++)
	{
		cin>>pre[i];
	}
	for(int i = 0;i<size;i++)
	{
		cin>>in[i];
	}
	BinarytNode<int> *root = buildTree(pre,size,in,size);
	printBTlevel;
}
