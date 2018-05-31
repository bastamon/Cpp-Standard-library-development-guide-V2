#pragma warning(disable:4786)
#include <iostream>
#include <map>
using namespace std;
typedef  map<int,double,less<int> > MAP;
typedef  multimap<int,double,greater<int> > M_MAP;
typedef  pair<MAP::iterator, bool> mypair;
typedef  pair<int,double> myp;
void print(MAP& m)
{
	MAP::iterator it;
	myp  temp_p;
	for(it=m.begin();it!=m.end();it++)
	{
		temp_p=(*it);
		cout<<temp_p.first<<", "<<temp_p.second<<endl;
	}
	cout<<endl;
}
void print_M(M_MAP& m)
{
	M_MAP::iterator it;
	myp  temp_p;
	for(it=m.begin();it!=m.end();it++)
	{
		temp_p=(*it);
		cout<<temp_p.first<<", "<<temp_p.second<<endl;
	}
	cout<<endl;
}
void main()
{
	MAP m1;
	M_MAP m2;
	M_MAP::iterator itA,itB;
	mypair p1,p2;
	MAP::value_compare vc1=m1.value_comp();
	M_MAP::value_compare vc2=m2.value_comp();
	//
	p1=m1.insert(map<int,double>::value_type(1,10));
	p2=m1.insert(map<int,double>::value_type(2,5));
	cout<<"输出容器m1: "<<endl;
	print(m1);
	if(vc1(*p1.first,*p2.first)==true)
	{
		 cout<<" 元素(1,10)在元素(2,5)之前"<<endl;
	}
	else
	{
		 cout<<" 元素(1,10)在元素(2,5)之后"<<endl;
	}
	itA=m2.insert(multimap<int,double>::value_type(1,20));
	itB=m2.insert(multimap<int,double>::value_type(2,50));
	cout<<"输出容器m2: "<<endl;
	print_M(m2);
	if(vc2(*itA,*itB)==true)
	{
		 cout<<" 元素(1,20)在元素(2,50)之前"<<endl;
	}
	else
	{
		 cout<<" 元素(1,20)在元素(2,50)之后"<<endl;
	}
}