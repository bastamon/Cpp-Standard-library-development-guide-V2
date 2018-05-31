#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <functional>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	list<int> l1;
	list<int>::iterator posL,posU;
	pair<list<int>::iterator,list<int>::iterator> range_Iterator;
	copy(dim,dim+9,back_inserter(l1));
	copy(dim,dim+9,back_inserter(l1));
	cout<<"list l1 is as below. "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	l1.sort();
	cout<<"list l1 has been sorted. "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	bool sh=binary_search(l1.begin(),l1.end(),9);
	if(sh)
	{
		cout<<"9 can be searched in list l1."<<endl;
	}
	else
	{
		cout<<"9 can't' be searched in list l1."<<endl;
	}
	vector<int> s;
	int dim2[]={3,4,5,6};
	s.assign(dim2,dim2+4);
	sh=includes(l1.begin(),l1.end(),s.begin(),s.end());
	if(sh)
	{
		cout<<"vector s can be included in list l1. "<<endl;
	}
	else
	{
		cout<<"vector s can't' be included in list l1. "<<endl;
	}
	posL=lower_bound(l1.begin(),l1.end(),8);
	posU=upper_bound(l1.begin(),l1.end(),8);
	range_Iterator=equal_range(l1.begin(),l1.end(),8);
	if(posL!=l1.end())
	  cout<<"8 can be positioned "<<distance(l1.begin(),posL)<<". "<<endl;
    if(posU!=l1.end())
      cout<<"8 can be positioned "<<distance(l1.begin(),posU)<<" secondly. "<<endl;
	cout<<"8 can be positioned from "<<distance(l1.begin(),range_Iterator.first)<<" to "<<distance(l1.begin(),range_Iterator.second)<<endl;
}