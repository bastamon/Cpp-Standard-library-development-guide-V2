#include <iostream>
#include <cmath>
using namespace std;
double pow2(float x);//����
double pow3(float* y);//����

double pow2(float x)   //����
{
	double z=0;
	z=x*x;
	return z; 	
}
double pow3(float* y)   //����
{
	double z=0;
	z=(*y)*(*y)*(*y);
	return z; 	
}
void main()
{
	double A=10;
	float B=20;
	double C=0;
	double D=0;
	C=pow2(A);
	//D=pow3(A);
	cout<<"A:  "<<A<<"  ; Pow2(A):  "<<C<<endl;
	D=pow3(&B);
	//D=pow3(&A);
	cout<<"B:  "<<B<<"  ; Pow3(B):  "<<D<<endl;
	cin.get();
}
