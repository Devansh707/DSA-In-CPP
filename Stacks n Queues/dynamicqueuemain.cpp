#include<iostream>
#include "dynamicqueuefile.h"
using namespace std;
int main()
{
	Queue<int> s(4);
	s.enqueue(36);
	s.enqueue(23);
	s.enqueue(22);
	s.enqueue(66);
	s.enqueue(75);
	s.display();
	cout<<s.front()<<endl;
	cout<<s.dequeue()<<endl;
	cout<<s.front()<<endl;
	cout<<s.getsize()<<endl;
	s.enqueue(75);
	s.display();
}
