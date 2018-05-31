#include <locale>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;
void main()
{
	basic_stringstream< char > pszGetF;
	ios_base::iostate st = 0;
	locale loc("german_germany");
	const messages<char> &m=use_facet<messages<char>>(loc);
	int pm=m.open("abcd",loc);
	if(pm<0)
	{
		cout<<"can't open the message."<<endl;
		exit(1);
	}
	cout<<"pm="<<pm<<endl;
	int _Set=1;
	int _Message=1;
	basic_string<char> df("error");
	string dr;
	dr=m.get(pm,_Set,_Message,df);
	cout<<dr<<endl;
	cout<<df<<endl;
    cin>>pm;
}