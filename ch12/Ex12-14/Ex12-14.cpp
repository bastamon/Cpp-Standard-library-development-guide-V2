#include <iostream>
#include <locale>
using namespace std;
void main()
{
	cin.imbue(locale("German_Germany"));
	cout.imbue(locale::classic());
	double f;
	cin>>f;//输入按德国形式
	cout<<f<<endl; //输出按经典形式（本地）
	cout<<"cin.fail() :"<<cin.fail()<<endl;
	return;
}