#include <iostream>
#include <complex>
using namespace std;
void main()
{
	complex<float> c1(1.5,2.5);
	complex<float> c2(c1);
	complex<float> c3;
	float re=3.5;
	float im=5.2;
	c2.real(re);
	c2.imag(im);
	cout<<"c1: "<<c1<<";  c2: "<<c2<<endl;
	c3=c1+c2;
	cout<<"c3=c1+c2 : "<<c3<<endl;
	c3=c1-c2;
	cout<<"c3=c1-c2 : "<<c3<<endl;
	c3=c1*c2;
	cout<<"c3=c1*c2 : "<<c3<<endl;
	c3=c1/c2;
	cout<<"c3=c1/c2 : "<<c3<<endl;
	c1+=c2;
	cout<<"c1+=c2 : "<<c1<<endl;
	c1-=c2;
	cout<<"c1-=c2 : "<<c1<<endl;
	c1*=c2;
	cout<<"c1*=c2 : "<<c1<<endl;
	c1/=c2;
	cout<<"c1/=c2 : "<<c1<<endl;
	bool cmp=(c1==c2);
	if(cmp)
		cout<<"c1==c2."<<endl;
	else
		cout<<"c1!=c2."<<endl;
	float a1=abs(c1);
	float a2=abs(c2);
	cout.precision(3);
	cout<<"abs(c1): "<<a1<<"  ;"<<"  abs(c2): "<<a2<<endl;

	a1=norm(c1);
	a2=norm(c2);
	cout.precision(3);
 	cout<<"norm(c1): "<<a1<<"  ;"<<"  norm(c2): "<<a2<<endl;

	a1=arg(c1);
	a2=arg(c2);
	cout.precision(3);
 	cout<<"arg(c1): "<<a1<<"("<<(a1*180/3.1415926)<<")"<<"  ;"<<"  arg(c2): "<<a2<<"("<<(a2*180/3.1415926)<<")"<<endl;

	complex<float> c11;
	complex<float> c12;
	c11=conj(c1);
	c12=conj(c2);
	cout<<"conj(c1) : "<<c11<<endl;
	cout<<"conj(c2) : "<<c12<<endl;
	c11=sin(c1);
	cout<<"sin(c1) = "<<c11<<endl;
	c11=cos(c1);
	cout<<"cos(c1) = "<<c11<<endl;
	c11=sin(c1)/cos(c1);
	cout<<"tan(c1) = "<<c11<<endl;
 	c11=sinh(c1);
	cout<<"sinh(c1) = "<<c11<<endl;
 	c11=cosh(c1);
	cout<<"cosh(c1) = "<<c11<<endl;
	c11=sinh(c1)/cosh(c1);
	cout<<"tanh(c1) = "<<c11<<endl;

	c3=pow(c1,c2);
	cout<<"pow(c1,c2)= "<<c3<<endl;
	c3=pow(c1,2);
	cout<<"pow(c1,2)= "<<c3<<endl;
//	c3=pow(3,c1);
//	cout<<"pow(3.0,c1)= "<<c3<<endl;
	c3=exp(c2);
	cout<<"exp(c2)= "<<c3<<endl;
	c3=sqrt(c1);
	cout<<"sqrt(c1)= "<<c3<<endl;
	c3=sqrt(complex<float>(-5,0));
	cout<<"sqrt(-5)= "<<c3<<endl;

	c3=log(c1);
	cout<<"log(c1)= "<<c3<<endl;
	c3=log10(c1);
	cout<<"log10(c1)= "<<c3<<endl;
}