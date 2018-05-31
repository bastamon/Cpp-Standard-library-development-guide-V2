#include <iostream>
#include <fstream>
#include <istream>
#include <string>
using namespace std;
void main()
{
	char chardim[30];
	char ch[6];
	fstream fio;
	fio.open(".\\test5.txt",ios::in|ios::out);
	int cnt=10;
	int gcnt=0;
	istream i0=fio.read(chardim,cnt);
	if(i0.good())
	{
		cout<<"Read success!"<<endl;
	}
	gcnt=fio.gcount();
	string buf;
	buf.assign(chardim,10);
	cout<<"The input chars from file test5.txt are: "<<buf<<endl;
	cout<<"The count of the last read function: "<<gcnt<<endl;
	istream is=fio.ignore(3,EOF);
	buf.erase(buf.begin(),buf.end());
	i0=fio.read(ch,5);
	if(i0.good())
	{
		cout<<"Read success!"<<endl;
	}
	buf.assign(ch,5);
 	cout<<"Secondly The input chars from file test5.txt are: "<<buf<<endl;
	char chc=fio.peek();
	if(chc==EOF)
	{
		cout<<"file eof reach."<<endl;
	}
	else
	{
		cout<<"some char has existed in file."<<endl;
	}
	i0=fio.unget();
 	i0=fio.read(ch,5);
	if(i0.good())
	{
		cout<<"Read success!"<<endl;
	}
	buf.assign(ch,5);
 	cout<<"Thirdly The input chars from file test5.txt are: "<<buf<<endl;
	fio.flush();
	fio.close();
}