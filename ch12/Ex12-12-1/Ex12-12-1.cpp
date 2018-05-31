#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
	locale loc( "german_germany" );
	const moneypunct < char, true > &mpunct = use_facet < moneypunct < char, true > >(loc);
	cout << loc.name( ) << " international currency symbol "<<  mpunct.curr_symbol( ) << endl;
 	const moneypunct < char, false> &mpunct2 = use_facet < moneypunct < char, false> >(loc);
 	cout << loc.name( ) << " domestic currency symbol "<<  mpunct2.curr_symbol( ) << endl;
//
	const moneypunct < char, true > &mpunct3 = use_facet< moneypunct < char, true > >(loc);
	cout << loc.name( ) << " international decimal point "<< mpunct3.decimal_point( ) << endl;

// 	const moneypunct < char, true > &mpunct4 = use_facet< moneypunct < char, false> >(loc);
// 	cout << loc.name( ) << " domestic decimal point "<< mpunct4.decimal_point( ) << endl;

//
	for (unsigned int i = 0; i <mpunct.grouping( ).length( ); i++ )
	{
		cout << loc.name( ) << " international grouping:\n the "<< i <<"th group to the left of the radix character "
			<< "is of size " << (int)(mpunct.grouping ( )[i])<< endl;
	}
	cout << loc.name( ) << " international frac_digits\n to the right"
		<< " of the radix character: "<< mpunct.frac_digits ( ) << endl;

	const moneypunct <char, false> &mpunct5 =use_facet <moneypunct <char, false> >(loc);
	for (unsigned int i = 0; i <mpunct5.grouping( ).length( ); i++ )
	{
		cout << loc.name( ) << " domestic grouping:\n the "	<< i <<"th group to the left of the radix character "
			<< "is of size " << (int)(mpunct5.grouping ( )[i]) 	<< endl;
	}
	cout << loc.name( ) << " domestic frac_digits\n to the right"
		<< " of the radix character: "<< mpunct5.frac_digits ( ) << endl << endl;

	const moneypunct <char, true> &mpunct6 = use_facet <moneypunct <char, true > >(loc);
	cout << loc.name( ) << " international negative number format: "
		<< mpunct6.neg_format( ).field[0] 
	<< mpunct6.neg_format( ).field[1] 
	<< mpunct6.neg_format( ).field[2] 
	<< mpunct6.neg_format( ).field[3] << endl;

	const moneypunct <char, false> &mpunct7 = 
		use_facet <moneypunct <char, false> >(loc);
	cout << loc.name( ) << " domestic negative number format: "
		<< mpunct7.neg_format( ).field[0] 
	<< mpunct7.neg_format( ).field[1] 
	<< mpunct7.neg_format( ).field[2] 
	<< mpunct7.neg_format( ).field[3] << endl;

	cout << loc.name( ) << " international negative sign: "
		<< mpunct7.negative_sign( ) << endl;
//
		const moneypunct <char, true> &mpunct8 = 
			use_facet <moneypunct <char, true> >(loc);
		cout << loc.name( ) << " international positive number format: "
			<< mpunct8.pos_format( ).field[0] 
		<< mpunct8.pos_format( ).field[1] 
		<< mpunct8.pos_format( ).field[2] 
		<< mpunct8.pos_format( ).field[3] << endl;

		const moneypunct <char, false> &mpunct9 =use_facet <moneypunct <char, false> >(loc);
		cout << loc.name( ) << " domestic positive number format: "
			<< mpunct9.pos_format( ).field[0] 
		<< mpunct9.pos_format( ).field[1] 
		<< mpunct9.pos_format( ).field[2] 
		<< mpunct9.pos_format( ).field[3] << endl;
		cout << loc.name( ) << " international positive sign:"
			<< mpunct9.positive_sign( ) << endl;

		cout << loc.name( ) << " international thousands separator: "
			<< mpunct9.thousands_sep( ) << endl;
}