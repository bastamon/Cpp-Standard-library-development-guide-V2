#include <iostream>
using namespace std;
void  count(bool  YN, int& counter);
void count (bool YN, int& counter )
{
	if (YN)
	{
	counter++;
	}
}

void main()
{
   int counter=0;
   bool YN=1;
   while(YN)
	{
	count(YN,counter);
	cout<<"  "<<counter<<endl;
	if(counter>5)
	{
		YN=0;
	}
	}
}
