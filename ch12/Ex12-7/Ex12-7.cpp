#define _INTL
#include <locale>
#include <iostream>
#include <wchar.h>
#define LEN 90
using namespace std;
void main()
{
    char pszExt[LEN+1];
	wchar_t *pwszInt = L"This is the wchar_t string to be converted.";
	memset( &pszExt[0], 0, ( sizeof( char ) )*( LEN+1 ) );
	char* pszNext;
	const wchar_t* pwszNext;
	mbstate_t state;
	locale loc("C");//English_Britain");//German_Germany
	int res = use_facet<codecvt<wchar_t,char, mbstate_t>>(loc).out( state,pwszInt,&pwszInt[wcslen(pwszInt)], pwszNext ,pszExt, &pszExt[wcslen(pwszInt)],pszNext);
	pszExt[wcslen(pwszInt)] = 0;
    cout<<pszExt<<endl;
//
	char* pszExt2 = "This is the string to be converted!";
	wchar_t pwszInt2 [LEN+1];
	memset(&pwszInt2[0], 0, (sizeof(wchar_t))*(LEN+1));
	const char* pszNext2;
	wchar_t* pwszNext2;
	mbstate_t state2 = {0};

	res = use_facet<codecvt<wchar_t, char, mbstate_t>>(loc).in( state,pszExt2, &pszExt2[strlen(pszExt2)], pszNext2,pwszInt2, &pwszInt2[strlen(pszExt2)], pwszNext2 );
	pwszInt2[strlen(pszExt2)] = 0;
    wcout<<pwszInt2<<endl;
//
	locale loc2 ( "German_Germany" );
	res = use_facet<codecvt<char, char, mbstate_t>>(loc2).encoding();
	cout<<"Ratio: "<<res<<endl;
//
	locale loc3 ( "German_Germany" );
	bool resB = use_facet<codecvt<char, char, mbstate_t>>(loc).always_noconv();
	if (resB)
		cout << "No conversion is needed." << endl;
	else
		cout << "At least one conversion is required." << endl;
//
	char* pszExt3 = "This is the string whose length is to be measured!";
	mbstate_t state3 = {0};
	locale loc4("C");//English_Britain");//German_Germany
	res = use_facet<codecvt<wchar_t, char, mbstate_t>>(loc).length(state3,pszExt3, &pszExt3[strlen(pszExt3)], LEN );
	wcout << "The length of the string is: "<<res<<" ."<<endl;
//
}