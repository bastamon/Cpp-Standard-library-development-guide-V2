#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
	locale loc( "English" );
	const numpunct < char> &npunct = use_facet <numpunct <char> >(loc);
	cout << loc.name() << " truename() is called. "<< npunct.truename() << endl;
	cout << loc.name() << " falsename() is called. "<< npunct.falsename() << endl;
	

	const numpunct <char> &npunct2 =use_facet <numpunct <char> >(loc);
	//cout<<npunct.grouping()<<endl;
	for (unsigned int i=0;i< npunct.grouping( ).length();i++)
	{
		cout << loc.name() << " international grouping:\n the "<< i <<"th group to the left of the radix character "
			<< "is of size " << (int)(npunct.grouping ()[i])<< endl;
	}

	cout << loc.name() << " decimal point "<<npunct.decimal_point() << endl;
	cout << loc.name( ) << " thousands separator "<< npunct.thousands_sep() << endl;
}