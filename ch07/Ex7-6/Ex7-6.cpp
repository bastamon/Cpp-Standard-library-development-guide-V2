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

	//ע��һ�����û�н���ʽ����ֱ�Ӳ���������У�����Ϊ������ʽ���Ƶ���ʱ���ɷ���ֵ��
	//��������ʱ���Ὣ��Щ�����ķ���ֵ�������������Ҫ���鷳
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