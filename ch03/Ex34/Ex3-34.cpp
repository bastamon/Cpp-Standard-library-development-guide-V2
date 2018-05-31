#pragma warning(disable:4786)
#include <iostream>
#include <map>
using namespace std;
typedef pair<int,double>mypair;
void print( map<int,double,greater<int> >& m)
{
	map<int,double,greater<int> >::iterator it;
	mypair tmp;
	int size=m.size();
	if (size<=0)
		cout<<"******"<<endl;
	else
	{
	for(it=m.begin();it!=m.end();it++)
	{
		tmp=(mypair)*it;
		cout<<tmp.first<<"; "<<tmp.second<<endl;
	}
	cout<<endl;
	}
}
void main()
{
	 map<int,double,greater<int> >m1;
	 map<int,double,greater<int> >m3;
	 multimap<int,double,greater<int> >m2;
	 multimap<int,double,greater<int> >::iterator itmA,itmB;
	 m1.insert(mypair(1,5.0));
	 m1.insert(mypair(2,10.5));
	 m1.insert(mypair(3,11.5));
	 m1.insert(mypair(4,13.5));
	 m1.insert(mypair(5,15.1));
	 cout<<"m1: "<<endl;
	 print(m1);
	 m2.insert(mypair(1,9.5));
	 m2.insert(mypair(2,12.5));
	 m2.insert(mypair(3,9.2));
	 m3=m1;
	 int size=m1.size();
	 cout<<"The size of map m1: "<<size<<endl;
	 size=m2.size();
	 cout<<"The size of map m2: "<<size<<endl;
	 m3.erase(m3.begin());
	 cout<<"m3: "<<endl;
	 print(m3);
 	 m3.erase(m3.begin(),--m3.end());
	 cout<<"m3: "<<endl;
 	 print(m3);
	 m1.erase(2);
	 cout<<"m1: "<<endl;
 	 print(m1);
	 m3.clear();
	 cout<<"m3: "<<endl;
	 print(m3);
	 m1.swap(m3);
	 cout<<"m1: "<<endl;
 	 print(m1);
	 cout<<"m3: "<<endl;
	 print(m3);
}