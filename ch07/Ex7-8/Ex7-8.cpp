#include <iostream>
using namespace std;
void main()
{
	int vari=123458;
	cout<<showbase<<uppercase<<" vari : "<<vari<<" vari(oct): "<<oct<<vari<<" vari(hex): "<<hex<<vari<<endl;
	cout<<endl;
	//������Ҫ�ֱ���ø������������ǽ��������������롢������С�
	cout.setf(ios::dec|ios::uppercase|ios::showbase);
	cout<<" vari : "<<vari;
	cout.setf(ios::oct,ios::basefield);
	cout<<" vari(oct): "<<vari;
	cout.setf(ios::hex,ios::basefield);
	cout<<" vari(hex): "<<vari<<endl;
}