// Ex13-18.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include <iostream>
#include <functional>
#include <assert.h>
using namespace std;
//_HAS_TRADITIONAL_STL=1;
void main(int argc, char* argv[])
{
	int x=137;
	identity<int> id;
	assert(x==id(x));
	cout<<id(x)<<endl;
}

