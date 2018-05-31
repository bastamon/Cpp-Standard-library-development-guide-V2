// Ex13-27.cpp : Defines the entry point for the console application.
#include <iostream>
#include <functional>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
void main(int argc, char* argv[])
{
	using namespace std;
	vector <char*> v1;
	vector <char*>::iterator Iter1, RIter;

	v1.push_back ( "Open" );
	v1.push_back ( "up" );
	v1.push_back ( "the" );
	v1.push_back ( "pearly" );
	v1.push_back ( "gates" );

	cout << "Original sequence contains: " ;
	for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
		cout << *Iter1 << " ";
	cout << endl;

	RIter = find_if( v1.begin( ), v1.end( ),not1 ( bind2nd (ptr_fun ( strcmp ), "pearly" ) ) );

	if ( RIter != v1.end( ) )  
	{
		cout << "The search for 'pearly' was successful.\n";
		cout << "The next character string is: " 
			<< *++RIter << "." << endl;
	}
}

