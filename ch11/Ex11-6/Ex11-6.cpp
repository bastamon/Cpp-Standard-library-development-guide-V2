#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
using namespace std;

int main()
{
    try{
		float in;
		runtime_error re("Input float error.");
		cin>>in;
		if(!cin)
			throw re;
    }
    catch (runtime_error& re)
    {
        cout << "Error type:" << re.what() << endl;
		cout<<"Class type:"<<typeid(re).name()<<endl;
    }
}