// Ex13-19.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <assert.h>
using namespace std;
void myprint(vector<int>& vi)
{
	vector<int>::iterator it;
	for(it=vi.begin();it!=vi.end();it++)
	{
		cout<<*it<<" , ";
	}
	cout<<endl;
}
void main(int argc, char* argv[])
{
	vector<int>v1(5,137);
	vector<char*>v2(5,(char*)0);
	vector<int>result(5);
	transform(v1.begin(),v1.end(),v2.begin(),result.begin(),project1st<int, char*>());
	assert(equal(v1.begin(),v1.end(),result.begin()));
	myprint(result);
//
	transform(v2.begin(),v2.end(),v1.begin(),result.begin(),project2nd<char*,int>());
	assert(equal(v1.begin(),v1.end(),result.begin()));
	myprint(result);
//
}

