#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;
void print(valarray<double>& array )
{
	int size=array.size();
	cout.precision(3);
	for(int i=0;i<size;i++)
		cout<<array[i]<<", ";
	cout<<endl;
}
void main()
{
	double dim[]={1,2,-3,4,5,6,-7,8,-9};
	valarray<double> v1(dim,sizeof(dim)/sizeof(double));
	valarray<double> v2;
	valarray<double> v3(2,9);
	cout<<"v1: "<<endl;
	print(v1);
	v2=abs(v1);
	cout<<"v2=abs(v1)= :"<<endl;
	print(v2);
	v2=pow(v1,v3);
	cout<<"v2=pow(v1,v3)= :"<<endl;
	print(v2);
	v2=exp(v1);
	cout<<"v2=exp(v1)= :"<<endl;
	print(v2);
	v2=sqrt(v1);		   //如果元素为负值	.输出时仅表明结果为虚数
	cout<<"v2=sqrt(v1)= :"<<endl;
	print(v2);
	v2=log(v1);
	cout<<"v2=log(v1)= :"<<endl;
	print(v2);
	v2=log10(v1);
	cout<<"v2=log10(v1)= :"<<endl;
	print(v2);
	v2=sin(v1);
	cout<<"v2=sin(v1)= :"<<endl;
	print(v2);
	v2=cos(v1);
	cout<<"v2=cos(v1)= :"<<endl;
	print(v2);
	v2=tan(v1);
	cout<<"v2=tan(v1)= :"<<endl;
	print(v2);
 	v2=sinh(v1);
	cout<<"v2=sinh(v1)= :"<<endl;
	print(v2);
	v2=cosh(v1);
	cout<<"v2=cosh(v1)= :"<<endl;
	print(v2);
	v2=tanh(v1);
	cout<<"v2=tanh(v1)= :"<<endl;
	print(v2);
 	v2=asin(v1);
	cout<<"v2=asin(v1)= :"<<endl;
	print(v2);
	v2=acos(v1);
	cout<<"v2=acos(v1)= :"<<endl;
	print(v2);
	v2=atan(v1);
	cout<<"v2=atan(v1)= :"<<endl;
	print(v2);
	v2=atan2(v1,v3);
	cout<<"v2=atan2(v1,v3)= :"<<endl;
	print(v2);
}