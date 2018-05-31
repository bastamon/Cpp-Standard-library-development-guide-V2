// Ex13-28.cpp : Defines the entry point for the console application.
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>
using namespace std;
void myprint(vector<int>& v)
{
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" , ";
	}
	cout<<endl;
}
void main(int argc, char* argv[])
{
	vector<int> v1;
	vector<int>::iterator Iter;
	int i;
	for (i = 0; i <= 6; i++)
	{
		v1.push_back(5 * i);
	}
	cout<<"vector v1:"<<endl;
	myprint(v1);
	vector<int>::iterator::difference_type res1;
	res1 = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 10));
	cout << "v1中大于10的元素个数: "<< res1 << "." << endl;
	vector<int>::iterator::difference_type res2;
	res2 = count_if(v1.begin(), v1.end(),not1(bind2nd(greater<int>(), 10)));
	cout << "v1中'不'大于10的元素个数: "
		<< res2 << "." << endl;
}

