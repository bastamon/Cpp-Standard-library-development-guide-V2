#include <iostream>
#include <locale>
using namespace std;
void main()
{
	cin.imbue(locale("German_Germany"));
	cout.imbue(locale::classic());
	double f;
	cin>>f;//���밴�¹���ʽ
	cout<<f<<endl; //�����������ʽ�����أ�
	cout<<"cin.fail() :"<<cin.fail()<<endl;
	return;
}