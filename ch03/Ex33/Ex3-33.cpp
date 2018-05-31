#pragma warning(disable:4786)
#include <iostream>
#include <map>
using namespace std;
typedef pair<int,double> mypair;
void Origin(map<int,double,greater<int> >& m,multimap<int,double,greater<int> >& mm)
{	 m.insert(mypair(1,5.0));
	 m.insert(mypair(2,7.0));
	 m.insert(mypair(3,7.0));
	 m.insert(mypair(4,17.0));
	 m.insert(mypair(5,11.0));
	 mm.insert(mypair(1,4.0));
	 mm.insert(mypair(2,8.0));
	 mm.insert(mypair(3,9.0));
	 mm.insert(mypair(4,12.0));
	 mm.insert(mypair(5,19.0));
}
void Print(map<int,double,greater<int> >& m,multimap<int,double,greater<int> >& mm)
{	map<int,double,greater<int> >::iterator it;
	multimap<int,double,greater<int> >::iterator itM;
	int size=m.size();
	cout<<"map: "<<endl;
	for(it=m.begin();it!=m.end();it++)
	{	mypair temp=*it;
		cout<<temp.first<<", "<<temp.second<<", "<<endl;
	}
	int Msize=mm.size();
	cout<<"multimap: "<<endl;
	for(itM=mm.begin();itM!=mm.end();itM++)
	{	mypair temp=*itM;
		cout<<temp.first<<", "<<temp.second<<", "<<endl;
	}
	cout<<endl;
}
void main()
{	 map<int,double,greater<int> >m1;
	 multimap<int,double,greater<int> >m2;
	 map<int,double,greater<int> >::iterator it;
	 map<int,double,greater<int> >::reverse_iterator itR;
	 multimap<int,double,greater<int> >::iterator itM;
	 multimap<int,double,greater<int> >::reverse_iterator itRM;
	 Origin(m1,m2);
	 Print(m1,m2);
	 it=m1.begin();
	 mypair tmp=*it;
	 cout<<"The first element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 it=m1.end();
	 tmp=*(--it);
	 cout<<"The last element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 itM=m2.begin();
	 tmp=*itM;
	 cout<<"The first element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 itM=m2.end();
	 tmp=*(--itM);
	 cout<<"The last element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 itR=m1.rbegin();
	 tmp=*itR;
	 cout<<"The reverse first element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 itR=m1.rend();
	 tmp=*(--itR);
	 cout<<"The reverse last element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 itRM=m2.rbegin();
	 tmp=*itRM;
	 cout<<"The reverse first element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 itRM=m2.rend();
	 tmp=*(--itRM);
	 cout<<"The reverse last element is : "<<tmp.first<<", "<<tmp.second<<";"<<endl;
	 cin.get();
}