// Ex13-29.cpp : Defines the entry point for the console application.
#include <vector>
#include <functional>
#include <algorithm>
#include <list>
#include <iostream>
#include <assert.h>
#include <cmath>
using namespace std;
template<typename T> void myprint(vector<T>& vd)
{
	vector<T>::iterator it;
	for(it=vd.begin();it!=vd.end();it++)
	{
		cout<<*it<<" , ";
	}
	cout<<endl;
}
template<typename T> void myprintL(list<T>& l)
{
	list<T>::iterator it;
	for(it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<" , ";
	}
	cout<<endl;
}
void main(int argc, char* argv[])
{
	cout<<"Test compose1()  and compose2() :"<<endl;
	double angleA[5]={60,45,90,-30,-180};
	double sinesS[5]={0,0,0,0,0};
	vector<double> angle;
	vector<double> sines;
	sines.assign(sinesS,sinesS+5);
	angle.assign(angleA,angleA+5);
	cout<<"Original Vector sines: "<<endl;
	myprint(sines);
	cout<<"Original Vector angle: "<<endl;
	myprint(angle);
//
	const double pi=3.1415926;
	assert(sines.size()>=angle.size());
	transform(angle.begin(),angle.end(),sines.begin(),
				compose1(negate<double>(),
				compose1(ptr_fun(sin),
				bind2nd(multiplies<double>(),pi/180.0))));
	cout<<" Vector sines: "<<endl;
	myprint(sines);
//
	int larray[6]={1,2,6,15,10,3};
	double la[6]={0.1,0.1,0.1,0.1,0.1,0.1};
	list<int> li(larray,larray+6);
	list<double> li2(la,la+6);
	cout<<"Original list li :"<<endl;
	myprintL(li);
	cout<<"Original list li2 :"<<endl;
	myprintL(li2);
	list<int>::iterator itl;
	itl=find_if(li.begin(),li.end(),compose2(logical_and<bool>(),
											 bind2nd(greater_equal<int>(),1),
											 bind2nd(less_equal<int>(),10)));
	assert(itl==li.end()||(*itl>=*itl<=10));
	cout<<"范围[1,10]之内的第一个元素："<<endl;
	cout<<*itl<<endl;
	transform(li.begin(),li.end(),li2.begin(),
			compose2(divides<double>(),
			         ptr_fun(sin),
					 bind2nd(plus<double>(),0)));//计算sin(x)/(x+5)
	cout<<"list li2 :"<<endl;
	myprintL(li2);
}

