#include<iostream>
using namespace std;

void heapsort(int arr[], int n)
{
	// insertion in heap manner
	int i = 1;
	while(i < n)
	{
		int childindex = i;
		while(childindex != 0)
		{
			int parentindex = (childindex - 1) / 2;
			if(arr[childindex] < arr[parentindex])
			{
				int temp = arr[childindex];
				arr[childindex] = arr[parentindex];
				arr[parentindex] = temp;
			}
			else{
				break;
			}
			childindex = parentindex;
		}
		i++;
	}
	// sorting by removing
	int size = n - 1;
	while(size > 0)
	{
		int temp = arr[0];
		arr[0] = arr[size];
		arr[size] = temp;
		size--;
		int parentindex = 0;
		int minindex = parentindex;
		int lci = (2 * parentindex) + 1;
		int rci = (2 * parentindex) + 2;
		while(lci <= size)
		{
			if(arr[lci] < arr[minindex])
			{
				minindex = lci;
			}
			if(rci <= size && arr[rci] < arr[minindex])
			{
				minindex = rci;
			}
			else if(parentindex == minindex)
			{
				break;
			}
			int temp = arr[minindex];
			arr[minindex] = arr[parentindex];
			arr[parentindex] = temp;
			parentindex = minindex;
			lci = (2 * parentindex) + 1;
			rci = (2 * parentindex) + 2;
		}
	}
}
int main()
{
	int size;
	cin>>size;
	int *input = new int[size];
	for(int i=0;i<size;i++){
		cin>>input[i];
	}
	heapsort(input,size);
	for(int i=0;i<size;i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
	delete[] input;
}

