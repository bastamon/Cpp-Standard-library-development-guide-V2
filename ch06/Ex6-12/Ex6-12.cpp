#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;
void myprint(int& ele)
{
	cout<<ele<<", ";
}
int op(int pre_ele,int ele)
{
	return pre_ele+ele*2;
}
void main()
{
	vector<int> v1,v2,v3;
	int dim[]={1,2,3,4,5,6,7,8,9,10,11,12};
	v1.assign(dim,dim+12);
	cout<<"vector v1: "<<endl;
	for_each(v1.begin(),v1.end(),myprint);
	cout<<endl;
	partial_sum(v1.begin(),v1.end(),back_inserter(v2));
	cout<<"vector v2: "<<endl;
	for_each(v2.begin(),v2.end(),myprint);
	cout<<endl;	
	partial_sum(v1.begin(),v1.end(),back_inserter(v3),op);
	cout<<"vector v3: "<<endl;
	for_each(v3.begin(),v3.end(),myprint);
	cout<<endl;	
}