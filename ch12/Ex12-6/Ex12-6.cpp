#include <iostream>
#include <locale>
using namespace std;
void main()
{
//widen
	 locale loc("English");
	 char* str="Hello everyone!";
	 wchar_t s2[16];
	 bool r = (use_facet<ctype<wchar_t> > ( loc).widen(str, str + strlen(str), &s2[0] ) != 0);  // C4996
	 s2[strlen(str)] = '\0';
	 cout << str << endl;
	 wcout << &s2[0] << endl;
	 ctype<wchar_t>::char_type charT;
	 charT = use_facet<ctype<char> > ( loc ).widen( 'a' );
	 cout<<charT<<" : "<<(char)charT<<endl;
//do_is  or  is
     locale loc1("German_Germany"), loc2("English_Australia");
	 if(use_facet<ctype<char>>(loc1).is(ctype_base::alpha,'a'))
	 {
		cout<<"The character 'a' in locale loc1 is alphabetic."<<endl;
	 }
	 else
	 {
		cout<<"The character 'a' in locale loc1 is not alphabetic."<<endl;
	 }
	 if(use_facet<ctype<char>>(loc2).is(ctype_base::alpha,'!'))
	 {
		cout<<"the character '!' in locale loc2 is alphabetic."<<endl;
	 }
	 else
	 {
		cout<<"The character '!' in loc2 is not alphabetic."<<endl;
	 }
	 char* str2="Hello, my name is John!";
	 ctype<char>::mask  maskarray[30];
	 use_facet<ctype<char>>(loc2).is(str2,str2+strlen(str2),maskarray);
	 for (int i = 0; i < strlen(str2); i++) 
	 {
		 cout << str2[i] << ":  "<<maskarray[i]<<"  "<< (maskarray[i] & ctype_base::alpha ? "alpha" : "not alpha")<<endl; 
	 };
	 cout<<endl;
 //do_narrow and narrow
	 locale loc3 ( "english" );
	 wchar_t *str3 = L"\x0392fhello everyone";
	 char str4 [16];
	 bool r3 = (use_facet<ctype<wchar_t> > ( loc3 ).narrow( str3, str3 + wcslen(str3), 'X', &str4[0] ) != 0);  // C4996
	 str4[wcslen(str3)] = '\0';
	 wcout << str3 << endl;
	 cout << &str4[0] << endl;
//scan_is  and scan_not
	 locale loc4 ( "German_Germany" );

	 char *str5 = "Hello, my name is John!";

	 const char* i = use_facet<ctype<char> > ( loc4 ).scan_is( ctype_base::punct, &str5[0], &str5[strlen(&str5[0])-1] );
	 cout << "The first punctuation is \"" << *i << "\" at position: " 
		 << i - str5 << endl;
	 //
	 i = use_facet<ctype<char> > ( loc4 ).scan_not( ctype_base::alpha, &str5[0], &str5[strlen(&str5[0])-1] );
	 cout << "First nonalpha character is \"" << *i << "\" at position: " 
		 << i - str5 << endl;
//tolower
	 locale loc5 ( "German_Germany" );
	 char str6[] = "HELLO, MY NAME IS John!";
	 use_facet<ctype<char> > ( loc5 ).tolower( &str6[0], &str6[strlen(&str6[0])-1] );
	 cout << "The lowercase string is: " << str6 << endl;
//toupper
	 locale loc6 ( "German_Germany" );
	 char str7[] = "Hello, my name is John!";
	 use_facet<ctype<char> > ( loc6 ).toupper
		 ( &str7[0], &str7[strlen(&str7[0])-1] );
	 cout << "The uppercase string is: " << str7 << endl;
}