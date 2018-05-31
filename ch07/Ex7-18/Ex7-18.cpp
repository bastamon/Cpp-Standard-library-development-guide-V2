#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void main(int argc, char* argv[])
{
	if(argc==1)
	{
		cerr<<"Usage: "<<argv[0]<<" filename[s]\n";
		exit(EXIT_FAILURE);
	}
	else
	{
		int count=argc;
		for(int i=0;i<count;i++)
		{
			cout<<"Paramter: "<<argv[i]<<endl;
		}
	}
}