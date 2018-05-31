#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
void main()
{
	locale loc( "german_germany" );
	basic_stringstream<char> psz, psz2;
	psz << "-1000,56";
	cout<<psz.str()<<endl;
	ios_base::iostate st = 0;
	long double fVal;
	cout << use_facet <numpunct <char> >(loc).thousands_sep( ) << endl;

	psz.imbue( loc );
	use_facet <num_get <char> >(loc).get( basic_istream<char>::_Iter( psz.rdbuf()),basic_istream<char>::_Iter(0), psz, st, fVal );

	if ( st & ios_base::failbit )
		cout << "money_get() FAILED" << endl;
	else
		cout << "money_get()= "<< fVal << endl;
	st = 0;
	cout <<"The thousands separator is: "<<use_facet<numpunct<char>>(loc).thousands_sep()<< endl;
	psz2.imbue( loc );
	use_facet <num_put<char>>(loc).put(basic_ostream<char>::_Iter(psz2.rdbuf()),psz2, ' ',fVal=1000.67);
	if (st & ios_base::failbit)
		cout<<"num_put( ) FAILED"<<endl;
	else
		cout<<"num_put( ) = "<<psz2.rdbuf()->str()<<endl;
}