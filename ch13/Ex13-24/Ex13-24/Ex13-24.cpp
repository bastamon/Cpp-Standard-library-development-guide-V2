// Ex13-24.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
void myprint(vector<vector<int>>& vv)
{
	vector<vector<int>>::iterator it;
	vector<int>::iterator itv;
	for(it=vv.begin();it!=vv.end();it++)
	{
		for(itv=it->begin();itv!=it->end();itv++)
			cout<<*itv<<" , ";
		cout<<endl;
	}
	cout<<endl;
}
void main(int argc, char* argv[])
{
	int A1[5]={1,2,3,4,5};
	int A2[5]={1,1,2,3,5};
	int A3[5]={1,4,1,5,9};
	int A4[5]={1,5,7,11,13};
	vector<vector<int>> v;
	v.push_back(vector<int>(A1,A1+5));
	v.push_back(vector<int>(A2,A2+5));
	v.push_back(vector<int>(A3,A3+5));
	v.push_back(vector<int>(A4,A4+5));
	myprint(v);
	int indices[4]={0,2,4,4};
	int& (vector<int>::*extract)(vector<int>::size_type);
	extract=&vector<int>::operator[];
	transform(v.begin(),v.end(),indices,ostream_iterator<int>(cout," "),mem_fun_ref(extract));
	cout<<endl;
}

