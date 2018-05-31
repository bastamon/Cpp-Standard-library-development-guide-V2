#include <iostream>
#include <locale>
using  namespace std;
void main()
{
	locale native("");
	cout.imbue(native);
	cout<<"native Number: "<<std::endl;
	cout<<10999.82<<endl;
	locale dutch("dutch");
	cout.imbue(dutch);
	cout<<"Dutch Number: "<<endl;
	cout<<10999.82<<endl;
	locale french("french");
	cout.imbue(french);
	cout<<"French Number: "<<endl;
	cout<<10999.82<<endl;
}