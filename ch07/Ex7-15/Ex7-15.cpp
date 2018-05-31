#include <iostream>	   //need
#include <fstream>
#include <string>
using namespace std;
void main()
{
	  string filename;
	  cout<<"Enter filename for new file: ";
	  cin>>filename;
	  ofstream fout(filename.c_str());
	  fout<<"For your eyes only!\n";
	  cout<<"Enter your secret number: ";
	  float secret;
	  cin>>secret;
	  fout<<"Your secret number is "<<secret<<endl;
	  fout.clear();
	  fout.close();
	  //
	  ifstream fin(filename.c_str());
	  cout<<"Here are the contents of "<<filename.c_str()<<": \n";
	  char ch;
	  while(fin.get(ch))
	  {
		 cout<<ch;
	  }
	  cout<<"Done! \n";
	  fin.clear();
	  fin.close();
	  cout<<"Other file read test:\n";
	  ifstream fin2(filename.c_str());
	  cout<<"Here are the contents of "<<filename.c_str()<<": \n";
	  cout<<fin2.rdbuf();
	  fin2.clear();
	  fin2.close();
}