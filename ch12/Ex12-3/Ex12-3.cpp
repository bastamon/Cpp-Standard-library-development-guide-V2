#include <iostream>
#include <locale>
#include <clocale>
#include <ctime>
using namespace std;
int main()
{
	char dataStr[81];
	time_t curtime;
	struct tm* tmtime;
	time(&curtime);
	tmtime=gmtime(&curtime);
	strftime(dataStr,80,"%#x",tmtime);
	std::locale french(std::locale("french"),std::locale("american"),LC_TIME);
	std::locale::global(french);
	strftime(dataStr,80,"%#x",tmtime);
	std::cout<<"French Date: "<<std::endl;
	std::cout<<dataStr<<std::endl;
	
	locale var("chinese");
	locale::global(var);
	string data_out;
	tmtime=gmtime(&curtime);
	strftime(dataStr,80,"%#x",tmtime);
	//data_out=string("我在北京工作.");
	cout<<string(dataStr)<<endl;
}