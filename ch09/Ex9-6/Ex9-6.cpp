#include <iostream>
using namespace std;
void main()
{
	int* birthday=new int[3];
	birthday[0]=8;
	birthday[1]=19;
	birthday[2]=2012;
	cout<<"Today is : "<<birthday[0]<<"/"<<birthday[1]<<"/"<<birthday[2]<<endl;
	delete[] birthday;
	return;
}