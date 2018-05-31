#include <iostream>
#include <stdexcept>
#include <bitset>
using namespace std;
void main()
{
	try 
	{
		bitset< 33 > bitset;
		bitset[32] = 1;
		bitset[0] = 1;
		cout<<" "<<bitset<<endl;
		unsigned long x = bitset.to_ulong();
		cout<<" "<<x<<" "<<endl;

	}
	catch ( exception &e ) 
	{
		cerr << "Caught : " << e.what() << endl;
		cerr << "Type : " << typeid(e).name( ) << endl;
	};	
}