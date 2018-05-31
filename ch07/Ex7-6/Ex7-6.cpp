#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	bool varb=1;
	cout<<std::noboolalpha<<varb<<"=="<<std::boolalpha<<varb<<endl;
	float varf=123.4512;
	int wid=cout.width();
	cout.width(6);
	cout<<varf<<endl;
//
	cout<<setw(7)<<varf<<endl;
//
	cout.width(6);
	cout<<cout.fill('_')<<varf<<endl;
//
	cout<<setw(9)<<setfill('*')<<varf<<"  "<<45<<endl;
//
	cout<<setw(9)<<setfill(' ')<<setiosflags(ios::right)<<varf<<";  :"<<setw(9)<<45.234<<endl;
	double varf1=123.4512;
	double varf2=456.892;
	cout<<setw(10)<<setfill(' ')<<setiosflags(ios::right)<<varf1<<";"<<resetiosflags(ios::left)<<setw(10)<<setfill(' ')<<setiosflags(ios::right)<<varf2<<endl;
	resetiosflags(ios::left);
	cout<<varf1<<" ; "<<varf2<<endl;

	//注意一下输出没有将格式控制直接插入流输出中，是因为下述格式控制调用时均由返回值；
	//程序运行时，会将这些函数的返回值输出，带来不必要的麻烦
	cout.width(12);
	cout.fill('*');
	cout.setf(ios_base::right,ios_base::adjustfield);
	cout<<varf1<<";"<<endl;
	cout<<varf2<<";"<<endl;
  	cout.width(12);
	cout.fill('*');
	cout.setf(ios_base::right,ios_base::adjustfield);
 	cout<<varf2<<";"<<endl;


	cout.width(12);
	cout.fill('*');
	cout.setf(ios_base::left,ios_base::adjustfield);
	cout<<varf1<<";"<<endl;
  	cout.width(12);
	cout.fill('*');
	cout.setf(ios_base::left,ios_base::adjustfield);
 	cout<<varf2<<";"<<endl;
}