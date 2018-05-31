#include <iostream>
#include <cmath>
using namespace std;
double fun(double x, double y)
{
	double result=0.0;
	if(fabs(y)<=1e-4)
	{
		cout<<"y may equal to 0.0."<<endl;
		exit(1);
		//abort();
	}
	else
		result=x/y;
	return result;
}
void main()
{
	double x,y,z;
	cout<<"Input number: x and y."<<endl;
	while(cin>>x>>y)
	{
		if(x=='q'||y=='q')
			break;
		z=fun(x,y);
		cout<<"fun(x,y) is : "<<z<<endl;
		cout<<"Please input next set of numbers :"<<endl;
	}
	cout<<"Bye."<<endl;
	return;
}