#include <iostream>
#include <locale>

int main( ) 
{
	using namespace std;
	cout.imbue( locale( "french_france" ) );
	double x = 123.123456;
	cout << x << endl;
	locale native("");
 	cout.imbue( native);
 	double  y=25.68;
 	cout<<y<<endl;
}