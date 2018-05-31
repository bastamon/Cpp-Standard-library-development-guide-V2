#include <iostream>
#include <utility>
using namespace std;
void main()
{
	int x=0, y=0;
	float z=0,w=0;
	x=1;
	if(x>y)
	{
		cout<<"x is bigger than  y. "<<endl;
	}
	else
	{
		cout<<"x is not bigger than y. "<<endl;
	}
	y=2;
	if((x,y)!=(y,z))
	{
		cout<<"(x,y)!=(y,z)."<<endl;
	}
	else
	{
		cout<<"(x,y)==(y,z)."<<endl;		
	}
}
