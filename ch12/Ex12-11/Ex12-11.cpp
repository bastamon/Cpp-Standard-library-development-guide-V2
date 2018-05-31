#include <locale>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
void po( char *p )
{
	locale loc( p );

	time_get <char>::dateorder order = use_facet <time_get <char> >( loc ).date_order ( );
	cout << loc.name( );
	switch (order){
	  case time_base::dmy: cout << "(day, month, year)" << endl;
		  break;
	  case time_base::mdy: cout << "(month, day, year)" << endl;
		  break;
	  case time_base::ydm: cout << "(year, day, month)" << endl;
		  break;
	  case time_base::ymd: cout << "(year, month, day)"<< endl;
		  break;
	  case time_base::no_order: cout << "(no_order)"<< endl;
		  break;
	}
}
int main( )
{
	locale loc;
	basic_stringstream< char > pszGetF, pszPutF;//, pszGetI, pszPutI;
	ios_base::iostate st = 0;
	struct tm t;
	memset(&t, 0, sizeof(struct tm));

	pszGetF << "July 4, 2000";
	pszGetF.imbue( loc );
	basic_istream<char>::_Iter i = use_facet <time_get<char> >
		(loc).get_date(basic_istream<char>::_Iter(pszGetF.rdbuf( ) ),
		basic_istream<char>::_Iter(0), pszGetF, st, &t);
	if ( st & ios_base::failbit )
		cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
	else
		cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") ="
		<< "\ntm_sec: " << t.tm_sec
		<< "\ntm_min: " << t.tm_min
		<< "\ntm_hour: " << t.tm_hour
		<< "\ntm_mday: " << t.tm_mday
		<< "\ntm_mon: " << (t.tm_mon+1)
		<< "\ntm_year: " << t.tm_year
		<< "\ntm_wday: " << t.tm_wday
		<< "\ntm_yday: " << t.tm_yday
		<< "\ntm_isdst: " << t.tm_isdst
		<< endl;
	pszGetF.clear();
	pszGetF << "2000";
	i = use_facet<time_get<char>>(loc).get_year(basic_istream<char>::_Iter(pszGetF.rdbuf()),basic_istream<char>::_Iter(0), pszGetF, st, &t);
	if (st & ios_base::failbit)
		cout << "time_get::get_year("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
	else
		cout << "time_get::get_year("<< pszGetF.rdbuf( )->str( )<< ") ="<< "\ntm_year: " << t.tm_year<< endl;
//
	pszGetF << "July";
	pszGetF.imbue( loc );
	i = use_facet <time_get <char> >(loc).get_monthname(basic_istream<char>::_Iter(pszGetF.rdbuf( )),basic_istream<char>::_Iter(0), pszGetF, st, &t);
	if (st & ios_base::failbit)
		cout << "time_get("<< pszGetF.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
	else
		cout << (t.tm_mon+1)  <<"月"<< endl;
//time
	basic_stringstream<char> pszGetF2;
	st = 0;//非常重要的参数
	pszGetF << "11:13:20";
	pszGetF.imbue( loc );
	i = use_facet<time_get <char>>(loc).get_time(basic_istream<char>::_Iter(pszGetF.rdbuf()),basic_istream<char>::_Iter(0), pszGetF2, st, &t);
	if (st & ios_base::failbit)
		cout << "time_get::get_time("<< pszGetF2.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
	else
		cout << "time_get::get_time("<< pszGetF2.rdbuf( )->str( )<< ") ="<< "\ntm_sec: " << t.tm_sec
		<< "\ntm_min: " << t.tm_min<< "\ntm_hour: " << t.tm_hour<< endl;
	basic_stringstream<char> pszGetF3;
	pszGetF3 << "Tuesday";
	pszGetF3.imbue(loc);
	i = use_facet<time_get<char> >(loc).get_weekday(basic_istream<char>::_Iter(pszGetF3.rdbuf( )),basic_istream<char>::_Iter(0), pszGetF3, st, &t);

	if (st & ios_base::failbit)
		cout << "time_get::get_time("<< pszGetF3.rdbuf( )->str( )<< ") FAILED on char: " << *i << endl;
	else
		cout << "time_get::get_time("<< pszGetF3.rdbuf( )->str( )<< ") ="
		<< "\ntm_weekday: " << t.tm_wday<< endl;
//
	po( "C" );
	po( "german" );
	po( "English_Britain" );
}
