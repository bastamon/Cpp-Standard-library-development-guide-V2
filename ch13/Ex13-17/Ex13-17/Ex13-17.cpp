// Ex13-17.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
void myprint(vector<int>& vd)
{
	vector<int>::iterator it;
	for(it=vd.begin();it!=vd.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}
void main(int argc, char* argv[])
{
	const int N=6;
	vector<int> V(N),V2(N),V3(N);
	generate(V.begin(),V.end(),rand);
	cout<<"vector v: "<<endl;
	myprint(V);
	transform(V.begin(),V.end(),V2.begin(),bind2nd(modulus<int>(),10));
	cout<<"vector v2: "<<endl;
	myprint(V2);
	transform(V.begin(),V.end(),V3.begin(),negate<int>());
	cout<<"vector v3: "<<endl;
	myprint(V3);
}

