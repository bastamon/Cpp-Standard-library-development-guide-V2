#include <iostream>
#include <valarray>
using namespace std;
void main()
{
	valarray<size_t> v1(20),v2,v3,v11;
	for(size_t i=0;i<20;i++)
	{	
		v1[i]=i;
		cout<<i<<", ";
	}
	cout<<endl;
	valarray<size_t> len(5,1);
	valarray<size_t> stri(3,1);
	gslice g1(1,len,stri);
	v11=v1[g1];
	cout<<"subcollection of one dimension: "<<endl;
	int size=v11.size();
	for(size_t j=0;j<size;j++)
	{	
		v1[j]=j;
		cout<<j<<", ";
	}
	cout<<endl;
	//以上是一维数组
	size_t lengthv[]={2,4};	
	size_t stridev[]={5,3};
	valarray<size_t>length(lengthv,2);//构造赋值
	valarray<size_t>stride(stridev,2);//构造赋值
	gslice g(1,length,stride);
	v2=v1[g];
	cout<<"subcollection of two dimension: "<<endl;
	size=v2.size();
	for(j=0;j<size;j++)
	{	
		v2[j]=j;
		cout<<j<<", ";
	}
	cout<<endl;

 	//myprint(v2,2);
	//以上是二维子集
	size_t lengthv2[]={2,2,3};	
	size_t stridev2[]={3,2,3};
 	valarray<size_t>length2(lengthv2,3);//构造赋值
	valarray<size_t>stride2(stridev2,3);//构造赋值
	gslice g2(1,length2,stride2);
	v3=v1[g2];
	cout<<"subcollection of three dimension: "<<endl;
	size=v3.size();
	for(j=0;j<size;j++)
	{	
		v3[j]=j;
		cout<<j<<", ";
	}
	cout<<endl;
	//以上是三维子集
}