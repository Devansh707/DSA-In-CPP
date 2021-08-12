#include<iostream>
using namespace std;
#include<queue>
int main(){
	queue<int> q;
	q.push(22);
	q.push(23);
	q.push(36);
	q.push(75);
	q.push(94);
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	cout<<q.empty()<<endl;
}
