#pragma warning(disable:4786)
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void print(int& Ele)
{
	cout<<Ele<<" ";
}
template <typename T>void printSet(set<T>& s)
{
	for_each(s.begin(),s.end(),print);
	cout<<endl;
}
void main()
{
	set<int>s1,s2;
	pair<set<int>::iterator,bool> p1;
	s1.insert(10);
	s1.insert(11);
	s1.insert(13);
	s1.insert(21);
	s1.insert(17);
	cout<<"s1: "<<endl;
	printSet(s1);
	p1=s1.insert(12);
	if(p1.second==true)
	{
		cout<<"The element 12 be inserted successfully."<<endl;
	}
	else
	{
		cout<<"The element 12 already exist in s1."<<endl;
	}
	cout<<"s1: "<<endl;
	printSet(s1);
	p1=s1.insert(17);
	if(p1.second==true)
	{
		cout<<"The element 17 be inserted successfully."<<endl;
		cout<<"The position of 17 is:"<<distance(s1.begin(),p1.first)+1<<endl;
	}
	else
	{
		cout<<"The element 17 already exist in s1."<<endl;
		cout<<"The position of 17 is:"<<distance(s1.begin(),p1.first)+1<<endl;
	}
	cout<<"s1: "<<endl;
	printSet(s1);
	s2=s1;
	s2.insert(25);
	cout<<"s2: "<<endl;
  	printSet(s2);
	s2.erase(25);
	cout<<"s2: (after erasing 25.) "<<endl;
  	printSet(s2);
	s2.erase(s2.begin());
	cout<<"s2: (after erasing *begin() "<<endl;
  	printSet(s2);
	s2.erase((++s2.begin()),(--s2.end()));
	cout<<"s2: (after erasing from ++begin() to --end()"<<endl;
  	printSet(s2);
}