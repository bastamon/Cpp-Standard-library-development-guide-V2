// Ex13-20.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include <iostream>
#include <functional>
#include <algorithm>
#include <map>
using namespace std;
void main(int argc, char* argv[])
{
	map<int, double> M;
	M[1]=0.3;
	M[47]=0.8;
	M[33]=0.1;
	cout<<"抽取键值： ";
	transform(M.begin(),M.end(),ostream_iterator<int>(cout," "),
		select1st<map<int,double>::value_type>());
	cout<<endl;
	cout<<"抽取实值： ";
	transform(M.begin(),M.end(),ostream_iterator<double>(cout," "),
		select2nd<map<int,double>::value_type>());
	cout<<endl;
}
