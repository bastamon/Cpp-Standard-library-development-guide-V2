#include <iostream>
#include <exception>
using namespace std;
void Tfunction( ) 
{
	cout << "1. I'll be back." << endl;
	//exit( 0);
}
void termfunction( ) 
{
   cout << "2. I'll be back." << endl;
   exit(1);
}
class Test 
{
	public:
	   Test( std::string msg ) : m_msg( msg ) 
	   {
		  std::cout << "In Test::Test()" << std::endl;
	   }
	   ~Test( ) 
	   {
		  std::cout << "In Test::~Test()" << "     std::uncaught_exception() = "<< std::uncaught_exception( )<< std::endl;
	   }
	private:
		std::string m_msg;
};

void main()
{
	exception ep("overflow.");
	cout<<ep.what()<<" 1."<<endl;
	try{
		throw ep;
	}
	catch(exception& e)
	{
		cout<<e.what()<<" 2."<<endl;
	}
	int id=cin.get();
	if (id==49)
	{
	unexpected_handler oldHand = set_unexpected( Tfunction );
	unexpected();
	}
	else if(id==50)
	{
	terminate_handler oldHand_t = set_terminate(termfunction);
	throw bad_alloc( );
	//terminate();
	}
//
	else if(id==51)
	{
		Test t1( "outside try block" );
		  try 
		  {
			 Test t2( "inside try block" );
			 throw 1;
		  }
		  catch (...) 
		  {
		  }
	}
}