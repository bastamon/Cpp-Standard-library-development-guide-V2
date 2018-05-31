#include <utility>
#include <iomanip>
#include <iostream>
void main()
{
	using namespace std;
	pair<int, double>p1,p2,p3;
	p1=make_pair(10,1.11e-1);
	p2=make_pair(1000,1.1e-3);
	p3=make_pair(100,1.11e-2);
	cout.precision(3);
	cout<<"The pair p1 is: ("<<p1.first<<", "<<p1.second<<" ). "<<endl;
	cout<<"The pair p2 is: ("<<p2.first<<", "<<p2.second<<" ). "<<endl;
	cout<<"The pair p3 is: ("<<p3.first<<", "<<p3.second<<" ). "<<endl;
	if(p1!=p2)
	{
		cout<<"The pairs p1 and p2 are not equal."<<endl;
	}
	else
		cout<<"The pairs p1 and p2 are equal."<<endl;
	if(p1!=p3)
	{
		cout<<"The pairs p1 and p3 are not equal."<<endl;
	}
	else
		cout<<"The pairs p1 and p3 are equal."<<endl;
}