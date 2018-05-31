#include <iostream>
#include <exception>
using namespace std;
float mydiv(float x,float y)
{
	if(y==0.0)
		throw y;
	return x/y;
}
void main()
{
	try{

	   cout<<"5/2="<<mydiv(5.0,2.0)<<endl;
	   cout<<"8/0="<<mydiv(8.0,0.0)<<endl;
	   cout<<"7/1="<<mydiv(7.0,1.0)<<endl;
	}
	catch(float)
	{
	  cout<<"exception of dividing zero.\n"<<endl;
	}
	cout<<"test ok!"<<endl;
}