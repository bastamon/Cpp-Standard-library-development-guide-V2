#include <iostream>
#include <valarray>
using namespace std;
void myprint(valarray<double>& v)
{
	int size=v.size();
	for(int i=0;i<size;i++)
		cout<<v[i]<<", ";
	cout<<endl;
}
void main()
{
	valarray<double> v1(12),v2;
	for(int i=0;i<12;i++)
		v1[i]=2*(i+1);
	cout<<"v1(Original) : "<<endl;
	myprint(v1);
	slice myslice(0,4,3);
	v2=v1[myslice];
	cout<<"v2(v1[slice(0,4,3)])  :"<<endl;
	myprint(v2);
}