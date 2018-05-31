#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(bool& Ele)
{
	cout<<Ele;
}
void main()
{
	int	X[]={1,0,1,0,0,0,1,1,1};
	vector<bool> vt;
	vector<bool>::iterator it;
	int i=0;
	for(i=0;i<9;i++)
	{
		vt.push_back(bool(X[i])) ;
	}
	for_each(vt.begin(),vt.end(),print);
	cout<<endl;
 	vt[3]=bool(1);
 	for_each(vt.begin(),vt.end(),print);
	cout<<endl;
}