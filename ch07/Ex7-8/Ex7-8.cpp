#include <iostream>
using namespace std;
void main()
{
	int vari=123458;
	cout<<showbase<<uppercase<<" vari : "<<vari<<" vari(oct): "<<oct<<vari<<" vari(hex): "<<hex<<vari<<endl;
	cout<<endl;
	//以下需要分别调用各函数，而不是将函数插入至输入、输出流中。
	cout.setf(ios::dec|ios::uppercase|ios::showbase);
	cout<<" vari : "<<vari;
	cout.setf(ios::oct,ios::basefield);
	cout<<" vari(oct): "<<vari;
	cout.setf(ios::hex,ios::basefield);
	cout<<" vari(hex): "<<vari<<endl;
}