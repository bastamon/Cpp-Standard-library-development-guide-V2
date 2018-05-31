// Ex13-28-1.cpp : Defines the entry point for the console application.
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdlib>
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
int main( )
{
	vector <int> v1;
	vector <int>::iterator Iter1;

	int i;
	v1.push_back( 6262 );
	v1.push_back( 6262 );//程序会发出异常
	for ( i = 0 ; i < 4 ; i++ )
	{
		v1.push_back( rand( ) );
	}

	cout << "Original vector v1:"<<endl ;
	myprint(v1);
	sort( v1.begin( ), v1.end( ) );
	cout << "Sorted vector v1:" ;
	myprint(v1);
	sort( v1.begin(),v1.end(),not2(less_equal<int>()));
	cout << "Resorted vector v1:" ;
	myprint(v1);
}
