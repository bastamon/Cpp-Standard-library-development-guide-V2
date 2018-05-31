#include <exception>
#include <iostream>
using namespace std;
void myUnexpected()
{
	cout<<"myUnexpected() is done."<<endl;
	throw bad_exception();
	exit(5);
}
void main()
{
	terminate_handler oldHandler =set_unexpected(myUnexpected);
	int switch_K;
	runtime_error a("Exception: runtime_error.");
	bad_exception b("Exception: bad_exception.");
	cout<<".....Please Input 0 for exit.       ....."<<endl;  
loop:	cout<<".....Please Input 1 or 2: ....."<<endl;  
	try{
		cin>>switch_K;
		if(!switch_K)
		{
			goto loop2;
		}
		switch(switch_K)
		{
		case 1:
			throw a;
			break;
		case 2:
			unexpected();
			break;
		}
	}
	catch(runtime_error& e )
	{
		cout<<"catch: "<<e.what()<<endl;
	}
	catch(bad_exception& e)
	{
		cout<<"catch: "<<e.what()<<endl;
		exit(0);
	}
	goto loop;
loop2: return;
}