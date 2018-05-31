#include <iostream>
#include <stdexcept>
using namespace std;
void main()
{
	range_error re("Error type: range_error.");
	try 
	{
		locale loc( "test" );
	}
	//catch(range_error& re)
	catch(...)
	{
		cout<<re.what()<<endl;
		cout<<typeid(re).name()<<endl;
	}
}