#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void printfile(string filename)
{
    ifstream fin(filename.c_str());
	cout<<fin.rdbuf();
	fin.seekg(0);
	cout<<fin.rdbuf();
}
void main(int argc, char* argv[])
{
	for(int i=1;i<argc;i++)
	{
		cout<<"The contents of file "<<argv[i]<<" is below.\n"<<endl;
		printfile(string(argv[i]));
	}
}