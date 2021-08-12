#include<iostream>
using namespace std;
#include "R2.cpp"
 int main()
 {
 	Pair<int ,float> p;
 	p.setx(10.2336);
 	p.sety(36.23);
 	cout<<"values of p : "<<endl;
 	cout<<p.getx()<<" "<<p.gety()<<endl;
 	
 	Pair<Pair<int , double> , float> d;
 	Pair<int , double> d2;
 	d2.setx(23);
 	d2.sety(36.23);
 	d.sety(23.36);
 	d.setx(d2);
 	cout<<"values of d :"<<endl;
 	cout<<d.getx().getx()<<" "<<d.getx().gety()<<" "<<d.gety()<<endl;
 }
