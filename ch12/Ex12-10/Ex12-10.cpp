#include <locale>
#include <iostream>
#include <tchar.h>
using namespace std;
void main() {
	locale loc ( "German_germany" );
	_TCHAR * s1 = _T("Das ist wei\x00dfzz."); 
	_TCHAR * s2 = _T("Das ist weizzz.");
	int result1 = use_facet<collate<_TCHAR>>(loc).compare(s1, &s1[_tcslen(s1)-1 ], s2, &s2[_tcslen(s2)-1]);
	cout << result1 << endl;
	locale loc2 ("C");
	int result2 = use_facet<collate<_TCHAR>>(loc2).compare (s1, &s1[_tcslen(s1)-1 ],s2,&s2[_tcslen(s2)-1]);
	cout << result2 << endl;

	long r1 = use_facet<collate<_TCHAR>>(loc).hash (s1, &s1[_tcslen(s1)-1]);
	long r2 = use_facet<collate<_TCHAR>> (loc).hash (s2, &s2[_tcslen(s2)-1]);
	cout << r1 << " " << r2 << endl;

	s2 = _T("zzz abc."); 
	collate<_TCHAR>::string_type r11;   // OK for typedef?
	r11 = use_facet< collate<_TCHAR> > (loc).transform (s2, &s2[_tcslen( s2 )-1 ]);
	cout << r11<< endl;
	basic_string<_TCHAR> r22 = use_facet<collate<_TCHAR>> (loc).transform (s2, &s2[_tcslen(s2)-1]);
	cout << r22<< endl;
}