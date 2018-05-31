#include <iostream>
#include <cstdio>
void main()
{
	using namespace std;
	cout<<"This system can generate up tp "<<TMP_MAX<<" temporary names of up to "<<L_tmpnam<<" characters.\n";
	char pszName[L_tmpnam]={'\0'};
	cout<<"Here are ten names: \n";
	for(int i=0;i<10;i++)
	{
	  tmpnam(pszName);
	  cout<<pszName<<endl;
	}
	return;	
}