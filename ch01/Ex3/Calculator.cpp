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
	cout<<"请输入x:" ;
	 cin>>x;
	cout<<endl;
 	cout<<"请输入y:" ;
	 cin>>y;
	cout<<endl;
	Calculator my;
	float He=my.Adder (x,y);
	cout<<"两数之和："<<He<<endl;
	float Cha=my.Substration(x,y);
	cout<<"两数之差："<<Cha<<endl;
	float Ji=my.Multiplication(x,y);
	cout<<"两数之积："<<Ji<<endl;
	float Shang=my.Division(x,y);
	cout<<"两数之商："<<Shang<<endl;
	float Pow=my.CPow(x,y);
	cout<<"x的y次方："<<Pow<<endl;
	float KaiFang=my.CSqrt(x);
	cout<<"x的平方根："<<KaiFang<<endl;
	cout<<"任意键程序退出";
	getchar();
	getchar();
}