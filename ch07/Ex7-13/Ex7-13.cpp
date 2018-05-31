#include <iostream>
#include <streambuf>
#include <cstdio>
using namespace std;
static const int bufferSize=10;
class myout:public std::streambuf
{
protected:
	char buffer[bufferSize];
		//=20;
public:
	int fileDescription;
	myout(int fd)
	{
		setp(buffer, buffer+bufferSize-1);
		fileDescription=fd;
	}
	virtual ~myout()
	{
		sync();
	}
protected:
	int flushbuffer(){
		int num=pptr()-pbase();
		if(write(fileDescription,buffer,num)!=num)
		{
			return EOF;
		}
		pbump(-num);
		return num;
	}
	virtual int_type overflow(int_type c)
	{
		if(c!=EOF)
		{
			*pptr()=c;
			pbump(1);
		}
		if(flushbuffer()==EOF)
		{
			return EOF;
		}
		return c;
	}
	virtual int sync()
	{
		if(flushbuffer()==EOF)
		{
			return -1;
		}
		return 0;
	}
	

};

class fdostream:public std::ostream
{
protected:
	myout buf;
public:
	fdostream(int fd)::std::ostream(0),buf(fd)
	{
		rdbuf(&buf);
	}
	
};

void main()
{
	//fprintf();
}
