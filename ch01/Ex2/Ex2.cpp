#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
void main()
{
	float pi=3.1415916;
	float radius=0;
	float area=0.0;
	float girth=0.0;
	cout<<"请输入圆的半径:"<<endl;
 	cin>>radius;
	area=pi*pow(radius,2);	   //使用数学函数pow();乘方
	girth=2*pi*radius;
	cout<<"area="<<area<<";  girth="<<girth<<endl;
	
	getchar();
	getchar();	 //等待程序退出
	return;
}