#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;
void main()
{
	double var1=198534.98236;
	cout.setf(ios::showpos|ios::uppercase);  //
	cout<<scientific<<setprecision(4)<<setw(16)<<setfill(' ')<<setiosflags(ios_base::right)<<var1<<endl; //
	cout.unsetf(ios::uppercase);   //取消大写
	cout<<scientific<<setprecision(4)<<setw(16)<<setfill(' ')<<setiosflags(ios_base::right)<<var1<<endl; //
	double var2=-198534.98236;
	cout.setf(ios::showpos|ios::uppercase);  //
	cout<<scientific<<setprecision(4)<<setw(16)<<setfill(' ')<<setiosflags(ios_base::right)<<var2<<endl; //
	cout.unsetf(ios::uppercase);   //取消大写
	cout<<scientific<<setprecision(4)<<setw(16)<<setfill(' ')<<setiosflags(ios_base::right)<<var2<<endl; //

}