#include <ctime>
#include <iostream>
using namespace std;

void main()
{
	char tempbuf[128];
	struct tm* mytime;
	time_t myclock;
	clock_t start, finish;
	time_t  tstart,tfinish,tcurr;
	double duration;
	long  count = 600000000L;

	time(&myclock);
	mytime=localtime(&myclock);
	cout<<"Usage of asctime() : " <<endl;
	cout<<"asctime():  Current Date and time : "<<asctime(mytime)<<endl;

	cout<<"Usage of ctime() : " <<endl;	
	cout<<"ctime():    Current Date and time : "<<ctime(&myclock)<<endl;

	cout<<"Usage of clock() : "<<endl;
	start=clock();
	while(count--);
	finish=clock();
	duration=(double)(finish-start)/CLOCKS_PER_SEC;
	cout<<"clock():    Consume "<<duration<<" second. "<<endl;

	cout<<"Usage of difftime() : "<<endl;
	count=600000000L;
	time(&tstart);
	while(count--);
	time(&tfinish);
	duration=(tfinish-tstart);
	cout<<"time():     Consume "<<duration<<" second. "<<endl;	

	cout<<"Usage of gmtime()  (GMT) : "<<endl;
	time(&tcurr);
	mytime=gmtime(&tcurr);
	cout<<"The current time : "<<(mytime->tm_year+1900)<<" ,"<<(mytime->tm_mon+1)<<" ,"<<mytime->tm_mday<<" , ";
	cout<<mytime->tm_hour<<" : "<<mytime->tm_min<<" : "<<mytime->tm_sec<<" , ";
	cout<<(mytime->tm_isdst?"Night.":"Daylight.")<<" , "<<mytime->tm_wday<<" , "<<mytime->tm_yday<<" th."<<endl;

	cout<<"Usage of localtime()  : "<<endl;
	time(&tcurr);
	mytime=localtime(&tcurr);
	cout<<"The current time : "<<(mytime->tm_year+1900)<<" ,"<<(mytime->tm_mon+1)<<" ,"<<mytime->tm_mday<<" , ";
	cout<<mytime->tm_hour<<" : "<<mytime->tm_min<<" : "<<mytime->tm_sec<<" , ";
	cout<<(mytime->tm_isdst?"Night.":"Daylight.")<<" , "<<mytime->tm_wday<<" , "<<mytime->tm_yday<<" th."<<endl;

	cout<<"Usage of mktime() : "<<endl;
	tcurr=mktime(mytime);
	cout<<"The seconds from 1970/1/1/0:0:0.  :  "<<tcurr <<" seconds. "<<"   "<<endl;

	cout<<"Usage of time() : "<<endl;
	time(&tcurr);
	cout<<"time transformed by localtime() : "<<asctime(localtime(&tcurr))<<endl;
	cout<<"time transformed by gmtime() : "<<asctime(gmtime(&tcurr))<<endl;

	cout<<"Usage of strftime() : "<<endl;
	mytime=localtime(&tcurr);
	strftime(tempbuf,128,"Today is %A, day %d of %B in the year %Y.\n",mytime);
	cout<<tempbuf<<endl;
}