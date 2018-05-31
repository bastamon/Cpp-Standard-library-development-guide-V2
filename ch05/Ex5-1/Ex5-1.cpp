#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print(int ele)
{
	 cout<<ele<<", ";
}
void main()
{
	list<int> l1;
	for(int i=1;i<=9;i++)
		l1.push_back(i);
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
	for_each(l1.rbegin(),l1.rend(),print);
	cout<<endl;
}