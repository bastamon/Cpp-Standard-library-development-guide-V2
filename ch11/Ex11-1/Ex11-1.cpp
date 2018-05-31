#include <iostream>
#include <stdexcept>
using namespace std;
void main()
{
   try 
   {
      throw logic_error( "logic error: 2012-9-11. " );
   }
   catch ( exception &ep ) 
   {
      cerr << "Caught: " << ep.what( ) << endl;
      cerr << "Type name: " << typeid( ep ).name( ) << endl;
   };
}