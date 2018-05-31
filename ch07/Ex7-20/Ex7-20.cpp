#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
string filename;
void main(int argc, char* argv[])
{
	char file[20];
	cout<<"Input filename: ";
	
	cin>>file;
	filename=string(file);
	if(filename.empty())
	{
		exit(EXIT_FAILURE);
	}
	cout <<"This example is used for test seekg(p) or tellg(p). "<<endl;
	fstream finout,fout;
	//ofstreambuf 
	finout.open(filename.c_str(),ios_base::in|ios_base::out);
	if(finout.is_open())
	{
		cout<<finout.rdbuf();
		finout.seekg(0);
		cout<<finout.rdbuf();
	}
	finout.seekg(0,ios_base::beg);
	fout.open("b.txt",ios_base::out);
	if(fout.is_open())
		{
		fout<<finout.rdbuf();
		fout.close();
		}
	cout<<endl;
	fout.open("c.txt",ios_base::out);
	if(fout.is_open())
		{
		finout.seekp(25,ios_base::beg);
		fout<<finout.rdbuf();
		fout.close();
		}
	cout<<endl;
	fout.open("d.txt",ios_base::out);
	if(fout.is_open())
		{
		finout.seekp(51,ios_base::beg);
		fout<<finout.rdbuf();
		fout.close();
		}
	cout<<endl;
}