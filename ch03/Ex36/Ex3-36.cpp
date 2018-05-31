#pragma warning(disable:4786)
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
typedef pair<int,double>mypair;
map<int,double,greater<int> >::iterator it1;
multimap<int,double,greater<int> >::iterator it2;
void print(map<int,double,greater<int> >& m)
{
	mypair tmp;
	for(it1=m.begin();it1!=m.end();it1++)
	{
	   tmp=(mypair)*it1;
	   cout<<" "<<tmp.first<<";  "<<tmp.second<<endl;
	}
	cout<<endl;
}
void printM(multimap<int,double,greater<int> >& m)
{
	mypair tmp;
	for(it2=m.begin();it2!=m.end();it2++)
	{
	   tmp=(mypair)*it2;
	   cout<<" "<<tmp.first<<";  "<<tmp.second<<endl;
	}
	cout<<endl;
}
void main()
{
	 typedef map<int,double,greater<int> > Map;
	 typedef multimap<int,double,greater<int> > MMap;
	 Map m1;
	 MMap m2;
	 mypair temp;
	 pair<Map::iterator,Map::iterator> p1;
	 pair<MMap::iterator,MMap::iterator>p2;
	 m1.insert(mypair(1,5.6));
	 m1.insert(mypair(2,8.2));
	 m1.insert(mypair(3,9.5));
	 m1.insert(mypair(4,10.5));
	 m1.insert(mypair(5,4.5));
	 print(m1);
 	 m2.insert(mypair(1,5.6));
	 m2.insert(mypair(2,8.2));
	 m2.insert(mypair(2,9.5));
	 m2.insert(mypair(4,10.5));
	 m2.insert(mypair(4,4.5));
	 printM(m2);
	 int size=m1.count(2);
	 int Msize=m2.count(4);
	 cout<<"The count of key 2 in the map m1: "<<size<<endl;
	 cout<<"The count of key 4 in the map m2: "<<Msize<<endl;
	 it1=m1.find(5);
	 temp=*it1;
	 cout<<"The element of key 5:---- "<<temp.first<<"; "<<temp.second<<endl;
	 it2=m2.find(2);
	 temp=*it2;
	 cout<<"The element of key 2:---- "<<temp.first<<"; "<<temp.second<<endl;
	 p1=m1.equal_range(3);
	 cout<<"The lower_bound(3) and upper_bound(3):---- "<<p1.first->second<<";  "<<p1.second->second<<endl;
	 p2=m2.equal_range(4);
	 cout<<"The lower_bound(4) and upper_bound(4):---- "<<p2.first->second<<";  "<<p2.second->second<<endl;

	 it1=m1.lower_bound(4);
	 temp=*it1;
	 cout<<"The lower_bound(4):---- "<<temp.first<<";  "<<temp.second<<endl;

	 it2=m2.upper_bound(5);
	 temp=*it2;
	 cout<<"The upper_bound(5):---- "<<temp.first<<";  "<<temp.second<<endl;
}