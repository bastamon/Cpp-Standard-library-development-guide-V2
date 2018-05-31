#include <iostream>
using namespace std;
void main()
{
	long Aa=11;
	long *B_Pointer=NULL;
	B_Pointer=&Aa;
	cout<<"Aa的值: "<<Aa<<"  ,Aa的内存地址:  "<<B_Pointer<<endl;;
    cin.get();
}