#include <locale>
#include <iostream>
#include <sstream>
using namespace std;

int main( )
{
	locale loc( "german_germany" );
	basic_stringstream< char > psz;
	psz << use_facet<moneypunct<char, 1> >(loc).curr_symbol() << "-1.000,56";
	basic_stringstream< char > psz2;
	psz2 << "-100056" << use_facet<moneypunct<char, 1> >(loc).curr_symbol();
	ios_base::iostate st = 0;
	long double fVal;
	psz.flags( psz.flags( )|ios_base::showbase ); 
	// Which forced the READING the currency symbol
	psz.imbue(loc);
	use_facet < money_get < char > >( loc ).
		get( basic_istream<char>::_Iter( psz.rdbuf( ) ),   
		basic_istream<char>::_Iter( 0 ), true, psz, st, fVal );
	
	if ( st & ios_base::failbit )
		cout << "money_get(" << psz.str( ) << ", intl = 1) FAILED"
		<< endl;
	else
		cout << "money_get(" << psz.str( ) << ", intl = 1) = " 
		<< fVal/100.0 << endl;
	use_facet < money_get < char > >( loc ).
		get(basic_istream<char>::_Iter(psz2.rdbuf( )),   
		basic_istream<char>::_Iter(0), false, psz2, st, fVal);
	
	if ( st & ios_base::failbit )
		cout << "money_get(" << psz2.str( ) << ", intl = 0) FAILED" 
		<< endl;
	else
		cout << "money_get(" << psz2.str( ) << ", intl = 0) = " 
		<< fVal/100.0 << endl;

//
	locale loc2( "english_canada" );
// 	basic_stringstream<char>  psz2;
	st = 0;

	psz2.imbue( loc );
	psz2.flags( psz2.flags( )|ios_base::showbase ); // force the printing of the currency symbol
	use_facet < money_put < char > >(loc).put(basic_ostream<char>::_Iter( psz2.rdbuf( ) ), true, psz2, st, 100012);
	if (st & ios_base::failbit)
		cout << "money_put( ) FAILED" << endl;
	else
		cout << "money_put( ) = \"" << psz2.rdbuf( )->str( ) <<"\""<< endl;   
	st = 0;
};