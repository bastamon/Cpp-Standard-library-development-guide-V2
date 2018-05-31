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
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(4);
	l1.push_back(5);
	l2.push_back(1);
	l2.push_back(2);
	l2.push_back(3);
	l2.push_back(5);
	l2.push_back(4);
	cout<<"l1: "<<endl;
	for_each(l1.begin(),l1.end(),Print);
	cout<<endl;
	cout<<"l2: "<<endl;
	for_each(l2.begin(),l2.end(),Print);
	cout<<endl;
	bool b=lexicographical_compare(l1.begin(),l1.end(),l2.begin(),l2.end());
	if(b)
	{
		cout<<"l1 < l2. "<<endl;
	}
	else
	{
		cout<<"l1 >= l2. "<<endl;
	}	
}