#include <iostream>
#include <locale>
#include <string>
using namespace std;
void main()
{
 	locale german("german");
 	locale::global(german);
 	bool OK=std::has_facet<std::ctype<char>>(german);
 	if(!OK)
 	{
 		cout<<"Can't perform the conversion.";
 	}
	else
	{
		cout<<"Can perform the conversion.\n";
	}
 	char test[]="abcdefghijk";
 	char* first=test;
 	char* last=first+sizeof(test);
 	cout<<"Original String: "<<endl;
 	cout<<first<<endl;
 	use_facet<ctype<char>>(german).toupper(first,last);
 	cout<<"Converted String: "<<endl;
 	cout<<first<<endl;
	locale loc1("German_Germany"), loc2("English_Australia");
	bool r1=use_facet<ctype<char>>(loc1).is(ctype_base::alpha,'a');
	bool r2=use_facet<ctype<char>>(loc2).is(ctype_base::alpha,'!');
	if(r1)
	{
		cout<<"is alphabetic."<<endl;
	}
	else
	{
		cout<<"Is not alphabetic."<<endl;
	}
	if(r2)
	{
		cout<<"Is alphabetic."<<endl;
	}
	else
	{
		cout<<"Is not alphabetic."<<endl;
	}
}