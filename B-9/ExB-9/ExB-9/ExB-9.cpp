#include <iostream>
#include <cstdlib>
using namespace  std;
void main(int argc, char* argv[])
{
	int  decimal, sign;
	char *buffer;
	double source = 3.1415926535;
	buffer = _fcvt( source, 7, &decimal, &sign ); // C4996
	cout<<"source: "<<source<<" , string : "<<buffer<<" , decimal: "<<decimal<<" , sign :"<<sign<<endl; 
	double source1 = -2.9879;
	buffer = _fcvt( source1, 7, &decimal, &sign ); // C4996
	cout<<"source: "<<source1<<" , string : "<<buffer<<" , decimal: "<<decimal<<" , sign :"<<sign<<endl; 
//
	
	buffer = _ecvt( source, 7, &decimal, &sign ); // C4996
	cout<<"source: "<<source<<" , string : "<<buffer<<" , decimal: "<<decimal<<" , sign :"<<sign<<endl; 
	
	buffer = _ecvt( source1, 7, &decimal, &sign ); // C4996
	cout<<"source: "<<source1<<" , string : "<<buffer<<" , decimal: "<<decimal<<" , sign :"<<sign<<endl; 
//
	_gcvt( source, 10,buffer); // C4996
	cout<<"source: "<<source<<" , string : "<<buffer<<endl; 

	_gcvt( source1, 10,buffer ); // C4996
	cout<<"source: "<<source1<<" , string : "<<buffer<<endl; 
}

