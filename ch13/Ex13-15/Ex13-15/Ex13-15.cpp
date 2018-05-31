#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <assert.h>
using namespace std;
void myprint(vector<bool>& vb)
{
	vector<bool>::iterator it;
	for(it=vb.begin();it!=vb.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}
void main(int argc, char* argv[])
{
	const int N=10;
	vector<bool> v1;
	for(int i=0;i<N;++i)
	{
		v1.push_back(rand()>(RAND_MAX/2));
	}
	cout<<"vector<bool> v1 :"<<endl;
	myprint(v1);
	vector<bool> v2;
	transform(v1.begin(),v1.end(),back_inserter(v2),logical_not<bool>());
	cout<<"vector<bool> v2 :"<<endl;
	myprint(v2);
	for(int i=0; i<N; ++i)
		assert(v1[i]==!v2[i]);
}

