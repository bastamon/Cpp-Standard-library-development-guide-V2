#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

void main()
{
	try{
	underflow_error ue("under_flow_error.");
	throw ue;
	//int vb=vi.at(-1);
	// cout<<va<<endl;
	}
	catch(exception& e)
	{
		cout<<e.what()<<endl;
		cout<<typeid(e).name()<<endl;
	}
}