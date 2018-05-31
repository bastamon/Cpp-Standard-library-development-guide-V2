#pragma warning(disable:4786)
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void Print(int& Ele)
{
	cout<<Ele<<", ";
}
void main()
{
	typedef set<int> SET;
	typedef multiset<int> MSET;
	SET s1;
	MSET s2;
	SET::iterator it;
	MSET::iterator Mit;
	pair<SET::iterator, SET::iterator>p1;
	pair<MSET::iterator, MSET::iterator>Mp1;
	s1.insert(10);
	s1.insert(15);
	s1.insert(21);
	s1.insert(17);
	s2.insert(11);
	s2.insert(16);
	s2.insert(20);
	s2.insert(18);
	s2.insert(20);
	cout<<"The Set S1 is below:"<<endl;
	for_each(s1.begin(),s1.end(),Print);
	cout<<endl;
	cout<<"The Multiset S2 is below:"<<endl;
	for_each(s2.begin(),s2.end(),Print);
	cout<<endl;
	int size=s1.size();
	int Msize=s2.size();
	cout<<"The size of the set s1: "<<size<<endl;
	cout<<"The size of the Multiset s2: "<<Msize<<endl;	
	int max_size=s1.max_size();
	int max_Msize=s2.max_size();
	cout<<"The max_size of the set s1: "<<max_size<<endl;
	cout<<"The max_size of the Multiset s2: "<<max_Msize<<endl;	
	int cnt=s1.count(10);
	int Mcnt=s2.count(20);
	cout<<"The count of \'10\' in set s1: "<<cnt<<endl;
	cout<<"The count of \'20\' in multiset s2: "<<Mcnt<<endl;
	it=s1.find(21);
	Mit=s2.find(18);
	cout<<"The element with a key '21' is: "<<*it<<endl;
	cout<<"The element with a key '18' is: "<<*Mit<<endl;
	it=s1.lower_bound(15);
	Mit=s2.lower_bound(16);
	if(it==s1.end())
	{
		cout<<"The element with a key 15 in s1 doesn't exist."<<endl;
	}
	else
	{
		cout<<"The element with a key 15 in s1 is: "<<*it <<endl;
	}
	if(Mit==s2.end())
	{
		cout<<"The element with a key 16 in s2 doesn't exist."<<endl;
	}
	else
	{
		cout<<"The element with a key 16 in s2 is: "<<*Mit <<endl;
	}
	it=s1.upper_bound(15);
	Mit=s2.upper_bound(16);
	if(it==s1.end())
	{
		cout<<"The element with a key >15 in s1 doesn't exist."<<endl;
	}
	else
	{
		cout<<"The element with a key >15 in s1 is: "<<*it <<endl;
	}
	if(Mit==s2.end())
	{
		cout<<"The element with a key >16 in s2 doesn't exist."<<endl;
	}
	else
	{
		cout<<"The element with a key >16 in s2 is: "<<*Mit <<endl;
	}
	p1=s1.equal_range(15);
	Mp1=s2.equal_range(16);
	if(it==s1.end())
	{
		cout<<"The element with a key >=15 in s1 doesn't exist."<<endl;
	}
	else
	{
		cout<<"The element with a key =15 in s1 is: "<<*p1.first <<endl;
		cout<<"The element with a key >15 in s1 is: "<<*p1.second<<endl;
	}
	if(Mit==s2.end())
	{
		cout<<"The element with a key >16 in s2 doesn't exist."<<endl;
	}
	else
	{
		cout<<"The element with a key =16 in s2 is: "<<*Mp1.first <<endl;
		cout<<"The element with a key >16 in s2 is: "<<*Mp1.second <<endl;
	}
}