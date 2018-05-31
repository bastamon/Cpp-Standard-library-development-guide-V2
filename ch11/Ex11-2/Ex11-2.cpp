#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
void main()
{
	try 
	{
      throw domain_error( "Your domain is in error!" );
	}
	catch (domain_error &e) 
	 {
      cerr << "Caught: " << e.what( ) << endl;
      cerr << "Type name: " << typeid(e).name( ) << endl;
	};
}