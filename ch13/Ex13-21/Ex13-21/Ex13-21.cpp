// Ex13-21.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
struct B{
	virtual void print()=0;
};
struct D1:public B{
	void print(){
		cout<<"I'm a D1."<<endl;
	}
};
struct D2:public B{
	void print(){
		cout<<"I'm a D2."<<endl;
	}
};
void main(int argc, char* argv[])
{
	vector<B*> v;
	v.push_back(new D1);
	v.push_back(new D2);	
	v.push_back(new D2);
	v.push_back(new D1);
	for_each(v.begin(),v.end(),mem_fun(&B::print));
//
	vector<vector<int>*> v2;
	v2.push_back(new vector<int>(5));
	v2.push_back(new vector<int>(3));
	v2.push_back(new vector<int>(4));
	transform(v2.begin(),v2.end(),ostream_iterator<int>(cout," "),mem_fun(&vector<int>::size));
	cout<<endl;
}

