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
	cout<<"vector :"<<endl;
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
	list<int>::iterator it;
	it=find(l1.begin(),l1.end(),5);
	cout<<"pos: "<<*it<<endl;
	list<int>::reverse_iterator itR(it);
	it=itR.base();
	cout<<"rpos: "<<*itR<<endl;
	cout<<"pos: "<<*it<<endl;
}