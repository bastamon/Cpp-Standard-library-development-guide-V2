#include <iostream>
#include <iomanip>
using namespace std;
void Of(double x)
{
	cout.precision(6);
	cout<<cout.scientific<<x<<endl;
}
void main()
{
	char* cstring="Hello";
	cout<<"string \" "<<" "<<cstring<<" \" "<<"is located at address: "<<
		static_cast<void*>(cstring)<<endl; 
	cout<<"string \" "<<" "<<cstring<<" \" "<<"is located at address: "<<
		(void*)cstring<<endl; 
	int x=10;
	int y=20;
	cout<<x<<flush<<", "<<y<<flush<<endl;
	double d=20.123456;
	double d1=30.3245;
	cout<<setprecision(4)<<d<<endl;
	cout.precision(4);
	cout<<d1<<endl;
	double d2=12345678.987634568;
	Of(d2);
}
