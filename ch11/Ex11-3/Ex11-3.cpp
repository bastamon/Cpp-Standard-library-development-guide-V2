#include <iostream>
//#include <istream>
#include <bitset>
using namespace std;
int main( )
{
   try 
   {
	  string s_test("11001010101100001b100101010110000");
      //bitset<16> bs( s_test,0,16 );
	  bitset<16> bs(s_test);
	  cout<<"size : "<<bs.size()<<endl;
	  //cout<<bs.to_string()<<endl;
	  cout<<bs<<endl;
   }
   catch ( exception &e ) 
   {
      cerr << "Caught " << e.what( ) << endl;
      cerr << "Type name: " << typeid( e ).name( ) << endl;
   };
}