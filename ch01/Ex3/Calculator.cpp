#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
class Calculator
{
public:
	Calculator();
	~ Calculator();
	float x;
	float y;
	float Adder(float x,float y);
	float Substration(float x,float y);
	float Multiplication(float x,float y);
	float Division(float x,float y);
	float CPow(float x,float y);
	float CSqrt(float x);
};
Calculator::Calculator()
{
	x=0;y=0;
}
Calculator::~Calculator()
{

}
float Calculator::Adder(float x,float y)
{
	float He=0;
	He=x+y;
	return He;
}
float Calculator::Substration(float x,float y)
{
	float Cha=0;
	Cha=x-y;
	return Cha;
}
float Calculator::Multiplication(float x,float y)
{
	float Ji=0;
	Ji=x*y;
	return Ji;
}
float Calculator::Division(float x,float y)
{
	float Shang=0;
	if(y==0.0)
		return -1;
	Shang=x/y;
	return Shang;
}
float Calculator::CPow(float x,float y)
{
	float ChengFang=0;
	ChengFang=pow(x,y);
	return ChengFang;
}
float Calculator::CSqrt(float x)
{
	float sqrtC=0.0;
	sqrtC=sqrt(x);
	return sqrtC;
}
void main()
{
	float x=0;
	float y=0;
	cout<<"������x:" ;
	 cin>>x;
	cout<<endl;
 	cout<<"������y:" ;
	 cin>>y;
	cout<<endl;
	Calculator my;
	float He=my.Adder (x,y);
	cout<<"����֮�ͣ�"<<He<<endl;
	float Cha=my.Substration(x,y);
	cout<<"����֮�"<<Cha<<endl;
	float Ji=my.Multiplication(x,y);
	cout<<"����֮����"<<Ji<<endl;
	float Shang=my.Division(x,y);
	cout<<"����֮�̣�"<<Shang<<endl;
	float Pow=my.CPow(x,y);
	cout<<"x��y�η���"<<Pow<<endl;
	float KaiFang=my.CSqrt(x);
	cout<<"x��ƽ������"<<KaiFang<<endl;
	cout<<"����������˳�";
	getchar();
	getchar();
}