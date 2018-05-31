#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Origin(vector<int>& v)
{	 v.push_back(1);
	 v.push_back(2);
	 v.push_back(3);
	 v.push_back(4);
	 v.push_back(5);
	 v.push_back(6);
	 v.push_back(7);
}
void Origin2(vector<int>& v)
{	 v.push_back(3);
	 v.push_back(4);
	 v.push_back(5);
	 v.push_back(6);
	 v.push_back(7);
	 v.push_back(8);
	 v.push_back(9);
}
bool relationship(int e1, int e2)
{  	 int tmp=e1+2;
	 return  e2==tmp;
}
void Print(vector<int>& v)
{	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<",  ";
	cout<<endl;
}
void main()
{	 vector<int> v1,v2;
	 Origin(v1);
	 Origin2(v2);
	 cout<<"vector v1: "<<endl;
	 Print(v1);
	 cout<<"vector v2: "<<endl;
	 Print(v2);
	 bool eq=equal(v1.begin(),v1.end(),v2.begin());
	 if(eq)
	 {	 cout<<"v1 == v2"<<endl;
	 }
	 else
	 {	 cout<<"v1 != to v2"<<endl;
	 }
	 bool eq2=equal(v1.begin(),v1.end(),v2.begin(),relationship);
	 if(eq2)
	 {	 cout<<"v2[i]==v1[i]+2"<<endl;
	 }
	 else
	 {	 cout<<"v2[i]!=v1[i]+2"<<endl;
	 }
}