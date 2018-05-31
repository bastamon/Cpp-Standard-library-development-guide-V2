#include <iostream>
#include <cstdlib>
using namespace std;
void main(int argc, char* argv[])
{
	char str[10]="12.345asd";
	char str1[10]="123.67e2";
	char str2[10]="566.ess";
	char str3[10]="d67.32";
	char str4[10]="65.3241";
	double A=atof(str);
	double B=atof(str1);
	double C=atof(str2);
	double D=atof(str3);
	double E=atof(str4);
	cout<<"A: "<<A<<" ,"<<"B: "<<B<<" ,"<<"C: "<<C<<" ,"<<"D:"<<D<<" ,"<<"E:"<<E<<endl;
}

