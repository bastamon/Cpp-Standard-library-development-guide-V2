#include <iostream>
#include <algorithm>
using namespace std;
void main()
{
	ostreambuf_iterator<char> bufwrite(cout);
	string hello("Hello, world!.\n");
	copy(hello.begin(),hello.end(),bufwrite);
	istreambuf_iterator<char> inpos(cin);
	istreambuf_iterator<char> endpos;
	ostreambuf_iterator<char> outpos(cout);
	while(inpos!=endpos)
	{
	   *outpos=*inpos;
	   ++inpos;
	   ++outpos;
	}
}