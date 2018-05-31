#include "Ex18.h"
#include <iostream>
#include <complex>
using namespace std;
void main()
{
    int i=1234;
	float j=567.34;
	complex<float> c(2.5,4.1);
	cout<<"i==\""<<toString(i)<<"\""<<endl;
	cout<<"i==\""<<toString(j)<<"\""<<endl;
	cout<<"i==\""<<toString(c)<<"\""<<endl;
	i=fromString<int>(string("1234"));
	j=fromString<float>(string("567.34"));
	c=fromString< complex<float> >(string("(2.5,4.1)"));
	cout<<"i==\""<<i<<"\""<<endl;
	cout<<"i==\""<<j<<"\""<<endl;
	cout<<"i==\""<<c<<"\""<<endl;
	cin.get();
}


