#include <vector>
#include <list>
#include <numeric>
#include <functional>
#include <iostream>
#include <algorithm>
using namespace std;
void myprint(int& ele)
{
	cout<<ele<<", ";
}
int op(int ele2,int ele1)
{
	return ele2*5-ele1*3;
}
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9,10,11,12};
	vector<int> v1;
	v1.assign(dim,dim+12);
	for_each(v1.begin(),v1.end(),myprint);
	cout<<endl;
	vector<int>v2(v1.size());
	vector<int>::iterator it;
	it=adjacent_difference(v1.begin(),v1.end(),v2.begin());
	cout<<"v1 is dealt by the algorithm adjacent_difference :"<<endl;
	for_each(v2.begin(),v2.end(),myprint);
	cout<<endl;
	
	adjacent_difference(v1.begin(),v1.end(),v2.begin(),op);
	cout<<"v1 is dealt by the algorithm adjacent_difference with pred  op: "<<endl;
	for_each(v2.begin(),v2.end(),myprint);
	cout<<endl;
}