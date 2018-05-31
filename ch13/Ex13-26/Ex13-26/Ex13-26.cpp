// Ex13-26.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include <iostream>
#include <functional>
#include <algorithm>
#include <list>
using namespace std;
void myprint(list<int> lt)
{
	list<int>::iterator it;
	for(it=lt.begin();it!=lt.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}
void main(int argc, char* argv[])
{
	list<int> L;
	int i=0;
	for (i=0;i<10;i++ )
	{
		L.push_back(rand()%3);
	}
	myprint(L);
	list<int>::iterator first_nonzero=find_if(L.begin(),L.end(),bind1st(not_equal_to<int>(),0));
	cout<<*first_nonzero<<endl;
	L.clear();
	for(i=0;i<10;i++)
	{
		L.push_back(rand()%4-3);
	}
	myprint(L);
	list<int>::iterator two_pos=find_if(L.begin(),L.end(),bind2nd(greater<int>(),-1));
	cout<<*two_pos<<endl;
	//return 0;
}

