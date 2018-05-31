// Ex13-16.cpp : Defines the entry point for the console application.
//
// 
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
void myprint(vector<double>& vd)
{
	vector<double>::iterator it;
	for(it=vd.begin();it!=vd.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}
void main(int argc, char* argv[])
{
	int N=5;
	vector<double> v1(N);
	vector<double> v2(N);
	vector<double> v3(N);
	generate(v1.begin(),v1.end(),rand);
	fill(v2.begin(),v2.end(),-RAND_MAX/2.0);
	cout<<"vector v1: "<<endl;
	myprint(v1);
	cout<<"vector v2:"<<endl;
	myprint(v2);
	transform(v1.begin(),v1.end(),v2.begin(),v3.begin(),plus<double>());
	cout<<"vector v3(plus):"<<endl;
	myprint(v3);

	transform(v1.begin(),v1.end(),v2.begin(),v3.begin(),minus<double>());
	cout<<"vector v3(minus):"<<endl;
	myprint(v3);
//	
	N=8;
	vector<double> v4(N);
	for(int i=0;i<N;++i)
		v4[i]=i+1;
	partial_sum(v4.begin(),v4.end(),v4.begin(),multiplies<double>());
	copy(v4.begin(),v4.end(),ostream_iterator<double>(cout,"\n"));
	cout<<endl;
	cout<<"vector v4(multiplies):"<<endl;
	myprint(v4);
//
	N=6;
	vector<double>v5(N);
	generate(v5.begin(),v5.end(),rand);
	transform(v5.begin(),v5.end(),v5.begin(),bind2nd(divides<double>(),155.0));
	cout<<"vector v5(divides):"<<endl;
	myprint(v5);

}

