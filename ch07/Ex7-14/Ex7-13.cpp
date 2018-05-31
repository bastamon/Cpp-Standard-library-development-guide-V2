#include <iostream>
#include <streambuf>
#include <cstring>
#include <io.h>
using namespace std;
static const int bufferSize=10;
class inbuf:public std::streambuf
{
protected:
 	char buffer[bufferSize];
public:
	inbuf()
	{
		setg(buffer+4,buffer+4,buffer+4);
	}
protected:
	virtual int_type underflow(){
		if(gptr()<egptr())
		{
			return *gptr();
		}
		int numputback;
		numputback=gptr()-eback();
		if(numputback>4){
			numputback=4;
		}
		memcpy(buffer+(4-numputback),gptr()-numputback,numputback);
		int num;
		num=read(0,buffer+4,bufferSize-4);
		if(num<=0){
			return EOF;
		}
		setg(buffer+(4-numputback),buffer+4,buffer+4+num);
		return *gptr();
	}
};
void main()
{
	  inbuf ib;
	  std::istream in(&ib);
	  char c;
	  for(int i=1;i<=20;i++)
	  {
		  in.get(c);
		  cout<<c<<flush;
		  if(i==8)
		  {
			  in.unget();
			  in.unget();
		  }
	  }
	  cout<<endl;
}