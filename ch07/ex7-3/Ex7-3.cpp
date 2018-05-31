#include <exception>
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;
void main()
{
	ios::iostate olde=cin.exceptions();
	cout<<"old exceptions: "<<olde<<endl;
	int x=0;
	try{
	cin.exceptions(ios::eofbit|ios::failbit|ios::badbit);
	//cin.exceptions(ios::goodbit);
	cin>>x;
	}
	catch(exception& e)
	{
		cout<<"exception: "<<e.what()<<endl;
	}
}