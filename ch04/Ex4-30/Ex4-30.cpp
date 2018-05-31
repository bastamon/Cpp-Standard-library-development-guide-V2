#pragma warning(disable:4786)
#include <iostream>
#include <list>
#include <set>
#include <algorithm>
#include <functional>
using namespace std;
/*
  merge, set_union, set_difference, set_intersection ,
*/
void print(int& elem)
{
	cout<<elem<<", ";
}
void main()
{
	int dim[]={1,2,3,4,5,6,7,8};
	int dim2[]={3,4,5,6,7,8,9,10};
	list<int> l1;
	set<int> s1;

	for(int i=0;i<sizeof(dim)/sizeof(int);i++)
		l1.push_back(dim[i]);
	for(i=0;i<sizeof(dim2)/sizeof(int);i++)
		s1.insert(dim2[i]);
	cout<<"list l1: "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"list s1: "<<endl;
	copy(s1.begin(),s1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"l1 and s1 are merged: "<<endl;
	merge(l1.begin(),l1.end(),s1.begin(),s1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"l1 and s1 are merged by algorithm set_union: "<<endl;
	set_union(l1.begin(),l1.end(),s1.begin(),s1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"l1 and s1 are merged by algorithm set_difference: "<<endl;
	set_difference(l1.begin(),l1.end(),s1.begin(),s1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"l1 and s1 are merged by algorithm set_intersection: "<<endl;
	set_intersection(l1.begin(),l1.end(),s1.begin(),s1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"l1 and s1 are merged by algorithm inplace_merge: "<<endl;
	copy(s1.begin(),s1.end(),back_inserter(l1));
	list<int>::iterator pos;
	pos=find(l1.begin(),l1.end(),3);
	pos=find(++pos,l1.end(),3);
	pos++;
	//int d=distance(l1.begin(),pos);
	inplace_merge(l1.begin(),pos,l1.end());//inplace_merge没有实现排序的效果
	l1.sort();
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
}