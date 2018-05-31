// Ex13-26-1.cpp : Defines the entry point for the console application.
//
#include <iostream>   
#include <algorithm>   
#include <functional>   
#include <list> 
using namespace std;   

void main(int argc, char* argv[])
{
 	int iarray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};   
	list<int> aList(iarray, iarray + 10);   
	int k = 0;   
	k = count_if(aList.begin(), aList.end(), bind1st(greater<int>(), 8));   
	cout << "bind1st  test: " << k << endl; 
	k = count_if(aList.begin(), aList.end(), bind2nd(greater<int>(), 8));   
	cout << "bind2nd  test: " << k << endl; 
}

