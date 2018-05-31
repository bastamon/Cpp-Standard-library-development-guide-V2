#include <iostream>
#include <cstring>
#include <string>
using namespace std;
extern int A;
extern int B;

void main()
{
	auto int x=0;
	register int y=0;
	static int count=0;
	char *ch=new char();
	sprintf(ch,"%d,%d,%d,%d,%d.",x,y,count,A,B);
	cout<<ch<<endl;
}