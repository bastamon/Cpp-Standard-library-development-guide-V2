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
int myop(int orig,int ele)
{
	return ele*2+orig;
}
void main()
{
	vector<int> vt;
	int dim[]={1,2,3,4,5,6,7,8,9,10,11,12};
	vt.assign(dim,dim+12);
	for_each(vt.begin(),vt.end(),myprint);
	cout<<endl;
	int sum=accumulate(vt.begin(),vt.end(),0);
	cout<<"The sum of vector vt is : "<<sum<<endl;
	sum=accumulate(vt.begin(),vt.end(),0,myop);
	cout<<"The sum2 of vector vt is : "<<sum<<endl;
}