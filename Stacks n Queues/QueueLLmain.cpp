#include<iostream>
#include "QueueLLfile.h"
using namespace std;
int main()
{
	Queue<int> s;
	s.enqueue(22);
	s.enqueue(23);
	s.enqueue(36);
	s.enqueue(75);
	s.enqueue(66);
	s.display();
	cout<<s.getsize()<<endl;
	cout<<s.front()<<endl;
	cout<<s.dequeue()<<endl;
	cout<<s.dequeue()<<endl;
	cout<<s.getsize()<<endl;
	ws.display();
	cout<<s.isempty()<<endl;
}
