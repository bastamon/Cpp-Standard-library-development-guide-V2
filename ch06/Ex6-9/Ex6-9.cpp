#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;
template<class T>void myprint(valarray<T>& v)
{
	int size=v.size();
	for(int i=0;i<size;i++)
	{
		cout<<v[i]<<", ";
	}
	cout<<endl;
}
void main()
{
	double dim[]={1,2,3,4,5,6,7,8,9,10,11,12};
	valarray<double> v(dim,12),v2,v3;
	cout<<"valarray v(Original) : "<<endl;
	myprint(v);
	valarray<size_t> vi(4);
	vi[0]=4;
	vi[1]=6;
	vi[2]=7;
	vi[3]=1;
	v2=v[vi];
	cout<<"valarray v2(indirect_array) : "<<endl;
	myprint(v2);
	v3=pow(v,v2);
	cout<<"v3=pow(v,v2) : "<<endl;
	myprint(v3);	
}