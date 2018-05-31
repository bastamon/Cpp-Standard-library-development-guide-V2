#include <iostream>
#include <cstdlib>
using namespace  std;
void main(int argc, char* argv[])
{
	//return 0;
	int A=37612;
	long B=98756223;
	unsigned long C=204123;
	char str[10]="";
	char str1[10]="";
	char str2[10]="";
	itoa(A,str,10);
	ltoa(A,str1,10);
	ultoa(A,str2,10);
	cout<<A<< ":"<<str<<endl;
	cout<<A<< ":"<<str1<<endl;
	cout<<A<< ":"<<str2<<endl;
	itoa(B,str,10);
	ltoa(B,str1,10);
	ultoa(B,str2,10);
	cout<<B<< ":"<<str<<endl;
	cout<<B<< ":"<<str1<<endl;
	cout<<B<< ":"<<str2<<endl;
	itoa(C,str,10);
	ltoa(C,str1,10);
	ultoa(C,str2,10);
	cout<<C<< ":"<<str<<endl;
	cout<<C<< ":"<<str1<<endl;
	cout<<C<< ":"<<str2<<endl;
}
