#pragma warning(disable:4786)
#include <iostream>
#include <map>
using namespace std;
typedef pair<int, double> CustomPair;
void Print(map<int,double>& m)
{	map<int, double>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{	CustomPair p1=(pair<int, double>)(*it);
		cout<<p1.first<<",  ";
		cout<<std::fixed<<cout.precision(2)<<p1.second<<";  "<<endl;
	}
}
void PrintM(multimap<int,double>& m)
{	multimap<int, double>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{	CustomPair p1=(pair<int, double>)(*it);
		cout<<p1.first<<",  ";
		cout<<std::fixed<<cout.precision(2)<<p1.second<<";  "<<endl;
	}
}
void PrintG(map<int,double,greater<int> >& m)
{	map<int, double,greater<int> >::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{	CustomPair p1=(pair<int, double>)(*it);
		cout<<p1.first<<",  ";
		cout<<std::fixed<<cout.precision(2)<<p1.second<<";  "<<endl;
	}
}
void PrintG_M(multimap<int,double,greater<int> >& m)
{	multimap<int, double,greater<int> >::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{	CustomPair p1=(pair<int, double>)(*it);
		cout<<p1.first<<",  ";
		cout<<std::fixed<<cout.precision(2)<<p1.second<<";  "<<endl;
	}
}
void PrintL_M(map<int,double,less<int> >& m)
{	map<int, double,less<int> >::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{	CustomPair p1=(pair<int, double>)(*it);
		cout<<p1.first<<",  ";
		cout<<std::fixed<<cout.precision(2)<<p1.second<<";  "<<endl;
	}
}

void main()
{	 map<int, double>::iterator itm;
	 map<int,double,greater<int> >::iterator itmG;
	 map<int,double,less<int> >::iterator itmL;
	 map<int,double> m1;
	 map<int,double,greater<int> >m2;
	 multimap<int,double> m3;
	 multimap<int,double,greater<int> >m4;
	 //
	 m1.insert(CustomPair(1,2.0));
	 m1.insert(CustomPair(2,5.0));
	 m1.insert(CustomPair(3,7.0));
	 m1.insert(CustomPair(4,8.0));
	 m1.insert(CustomPair(5,11.0));
	 m1.insert(CustomPair(6,6.0));
	 cout<<"m1: "<<endl;
	 Print(m1);
	 m2.insert(CustomPair(1,2.0));
	 m2.insert(CustomPair(2,5.0));
	 m2.insert(CustomPair(3,7.0));
	 m2.insert(CustomPair(4,8.0));
	 m2.insert(CustomPair(5,11.0));
	 m2.insert(CustomPair(6,6.0));
	 cout<<"m2(greater<int>:)"<<endl;
	 PrintG(m2);
	 m3.insert(CustomPair(1,2.0));
	 m3.insert(CustomPair(2,5.0));
	 m3.insert(CustomPair(3,7.0));
	 m3.insert(CustomPair(4,8.0));
	 m3.insert(CustomPair(5,11.0));
	 m3.insert(CustomPair(6,6.0));
	 cout<<"m3:"<<endl;
 	 PrintM(m3);
	 m4.insert(CustomPair(1,2.0));
	 m4.insert(CustomPair(2,5.0));
	 m4.insert(CustomPair(3,7.0));
	 m4.insert(CustomPair(4,8.0));
	 m4.insert(CustomPair(5,11.0));
	 m4.insert(CustomPair(6,6.0));
	 cout<<"m4(greater<int>:)"<<endl;
 	 PrintG_M(m4);
	 map<int,double>::allocator_type ma;
	 ma=m2.get_allocator();
	 map<int,double> m5(less<int>(),ma);
	 m5.insert(CustomPair(16,1.0));
	 m5.insert(CustomPair(15,7.0));
	 m5.insert(CustomPair(24,9.0));
	 m5.insert(CustomPair(23,13.0));
	 m5.insert(CustomPair(32,21.0));
	 m5.insert(CustomPair(11,27.0));
	 cout<<"m5(less<int>:)"<<endl;
 	 PrintL_M(m5);
}