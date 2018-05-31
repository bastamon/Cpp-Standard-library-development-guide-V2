#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
void Print(int& Ele)
{
	cout<<Ele<<", ";
}
void main()
{
	list<int> l1;
	vector<int> l2;
	pair<list<int>::iterator,vector<int>::iterator> p1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(7);
	l1.push_back(5);
	l2.push_back(1);
	l2.push_back(2);
	l2.push_back(3);
	l2.push_back(5);
	l2.push_back(6);
	l2.push_back(4);
	for_each(l1.begin(),l1.end(),Print);
	cout<<endl;
	for_each(l2.begin(),l2.end(),Print);
	cout<<endl;
    p1=mismatch(l1.begin(),l1.end(),l2.begin());
	if(p1.first==l1.end())
	{
		cout<<"no mismatch."<<endl;
	}
	else
	{
		cout<<"The first mismatch: ";
		cout<<*p1.first<<",  "<<*p1.second<<endl;
	}
	p1=mismatch(l1.begin(),l1.end(),l2.begin(),less_equal<int>());
	if(p1.first==l1.end())
	{
		cout<<"no mismatch."<<endl;
	}
	else
	{
		cout<<"The first mismatch: ";
		cout<<*p1.first<<",  "<<*p1.second<<endl;
	}
//.......................................
}