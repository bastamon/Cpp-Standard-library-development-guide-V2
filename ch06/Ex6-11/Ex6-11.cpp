#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;
void myprint(int ele)
{
	cout<<ele<<", ";
}
int op1(int initV,int ele3)
{
	return initV+ele3;
}
int op2(int ele1,int ele2)
{
	return ele1*2+ele2*3;
}
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int dim2[]={3,4,5,6,7,8,9,10,11,12,13,14};
	list<int> l1,l2;
	copy(dim,dim+12,back_inserter(l1));
	for_each(l1.begin(),l1.end(),myprint);
	cout<<endl;
	copy(dim2,dim2+12,back_inserter(l2));
	for_each(l2.begin(),l2.end(),myprint);
	cout<<endl;
	int prod=inner_product(l1.begin(),l1.end(),l2.begin(),0);
	cout<<"inner_product of l1 and l2 is : "<<prod<<endl;
	prod=inner_product(l1.begin(),l1.end(),l2.begin(),0,op1,op2);
	cout<<"inner_product of l1 and l2 with function op1 and op2 is : "<<prod<<endl;
	int sum=0;
	for(int j=0;j<12;j++)
	{
		sum+=(dim[j]*2+dim2[j]*3);
	}
	cout<<"inner_product of l1 and l2 with function op1 and op2 is : "<<sum<<endl;
}