#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
const string filename="test.txt";
void main()
{
	ifstream fin;
	fin.open(filename.c_str(),ios_base::in);
	if(fin.is_open())
	{
		cout<<"Here are the current contents of the \'"<<filename<<"\' :"<<endl;
		cout<<fin.rdbuf();
		cout<<endl;
	}
	fin.clear();
	fin.close();
	ofstream fout;
	fout.open(filename.c_str(),ios_base::out|ios_base::app);
	if(!fout.is_open())
	{
		cerr<<"Can't open "<<filename<<" file for output.\n";
		exit(EXIT_FAILURE);
	}
	cout<<"Enter new file contents (to be append):\n";
	string buffer;
	while(getline(cin,buffer)&&buffer.size()>0)
	{
		fout<<buffer<<endl;
	}
	fout.clear();
	fout.close();
//
	fin.open(filename.c_str(),ios_base::in);
	if(fin.is_open())
	{
		cout<<"Here are the current contents of the \'"<<filename<<"\' :"<<endl;
		cout<<fin.rdbuf();
		cout<<endl;
	}
	fin.clear();
	fin.close();
	return;
}