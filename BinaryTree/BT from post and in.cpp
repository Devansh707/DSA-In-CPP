#include<iostream>
#include "take ip and print levelfile.h"
using namespace std;
//i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

BinarytNode<int>* buildTreeHelper(int *post, int *in, int postS, int postE, int inS, int inE)
{
	if(inS > inE)
	{
		return NULL;
	}
	int rootdata = post[postS];
	int rootindex = -1;
	for(int i =inS ;i<= inE;i++)
	{
		if(in[i] == rootdata)
		{
			rootindex = i;
			break;
		}
	}
	int linS = inS;
	int lpostS = postS;
	int rinE = inE;
	int rinS = rootindex + 1;
	int linE = rootindex - 1;
	int lpostE = linE - linS + lpostS;
	int rpostE = postE - 1;
	int rpostS = lpostE + 1;
	BinarytNode<int> *root = new BinarytNode<int>(rootdata);
	root->left = buildTreeHelper(post, in , lpostS, lpostE, linS, linE);
	root->right = buildTreeHelper(post, in ,rpostS, rpostE, rinS, rinE);
	return root;
}


BinarytNode<int> *buildTree(int *post, int postLength, int *in, int inLength)
{
	return buildTreeHelper(post, in, 0, postLength - 1, 0, inLength - 1);
}

int main()
{
	int size;
	cout<<"enter the size :"<<endl;
	cin>>size;
	int *post = new int [size];
	int *in = new int[size];
	for(int i = 0;i<size;i++)
	{
		cin>>post[i];
	}
	for(int i = 0;i<size;i++)
	{
		cin>>in[i];
	}
	BinarytNode<int> *root = buildTree(post,size,in,size);
	printBTlevel;
}
