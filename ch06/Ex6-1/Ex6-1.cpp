#include <iostream>
#include <complex>
using namespace std;
void main()
{
	complex<double> c1(3.0,4.0); //real, image
	complex<float> c2(polar(5.0,1.0));//magnitude, phase
    cout<<"c1: "<<c1<<endl;
	cout<<"c2: "<<c2<<endl;
	cout<<"c1: magnitude: "<<abs(c1)<<"(squared magnitude:  "<<norm(c1)<<")"<<"phase angle: "<<arg(c1)<<endl;
	cout<<"c2: magnitude: "<<abs(c2)<<"(squared magnitude:  "<<norm(c2)<<")"<<"phase angle: "<<arg(c2)<<endl;
	cout<<"c1 conjugated: "<<conj(c1)<<endl;
	cout<<"c2 conjugated: "<<conj(c2)<<endl;
	cout<<"c1*2.0=: "<<(c1*2.0)<<endl;
	cout<<"c1+c2= : "<<(c1+complex<double>(c2.real(),c2.imag()))<<endl;
}