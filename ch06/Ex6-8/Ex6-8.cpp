#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;
void myprint(valarray<double>& v)
{	int size=v.size();
	for(int i=0;i<size;i++)
		cout<<v[i]<<", ";
	cout<<endl;
}
void main()
{
	double dim[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	valarray<double> v1(dim,sizeof(dim)/sizeof(double)),v2,v3;
	cout<<"valarray(Original) v1:  "<<endl;
	myprint(v1);
	bool B[]={0,1,0,1,0,0,1,1,1};
	valarray<bool> mask_array(B,9);
	v2=v1[mask_array];
	cout<<"mask_array v2:"<<endl;
	myprint(v2);
	v1[v1>8.0]=33.0;
	cout<<"valarray v1: "<<endl;
	myprint(v1);
	v1[v1<8.0]=valarray<double>(v1[v1<8.0])+50.5;
	myprint(v1);
	bool B2[12];
	for(int i=0;i<12;i++)
	{	B2[i]=(bool)fmod(v1[i],2);
	}
	for(i=0;i<12;i++)
	{  cout<<B2[i];
	}
	cout<<endl;
	valarray<bool> vB2(B2,12);
	v1[!vB2]=0;
	myprint(v1);
}