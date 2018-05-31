#include <iostream>
#include <string>
void main()
{
	const std::string cS("conststring");
	std::string s("abcde");
	char temp='\0';
	char temp_1=0;
	char temp_2=0;
	char temp_3=0;
	char temp_4=0;
	char temp_5=0;
//
	temp=s[2];
	temp_1=s.at(2);
	temp_2=s[s.length()];
	temp_3=cS[cS.length()];
//	temp_4=s.at(s.length());
//	temp_5=cS.at(cS.length());
	std::cout<<(int)temp<<","<<(int)temp_1<<","<<(int)temp_2<<","<<(int)temp_3<<","<<(int)temp_4<<","<<(int)temp_5<<","<<std::endl;
}
