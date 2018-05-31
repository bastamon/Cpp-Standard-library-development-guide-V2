#include <iostream>
#include <locale>
#include <time.h>
using namespace std;
void main()
{
	char dataStr[81];
	time_t curtime;
	struct tm* tmTime;
	time(&curtime);      //获取当前时间
 	tmTime=gmtime(&curtime);
 	strftime(dataStr,80,"%#x",tmTime);     //转换时间至tm结构
 	std::locale native("");
 	std::locale::global(native);      //转换时间为字符串格式
 	std::cout<<"Native Date: "<<std::endl;
 	std::cout<<dataStr<<std::endl;
	std::locale german("german");
	std::locale::global(german);
	strftime(dataStr,80,"%#x",tmTime);
	std::cout<<"German Date: "<<std::endl;
	std::cout<<dataStr<<std::endl;
//
	std::locale chinese("chinese");
	std::locale::global(chinese);
	strftime(dataStr,80,"%#x",tmTime);
	std::cout<<"Chinese Date: "<<std::endl;
	std::cout<<dataStr<<std::endl;
//
	std::locale french("French");
	std::locale::global(french);
	strftime(dataStr,80,"%#x",tmTime);
	std::cout<<"French Date: "<<std::endl;
	std::cout<<dataStr<<std::endl;
//
}
