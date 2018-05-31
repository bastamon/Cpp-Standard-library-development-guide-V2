#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	//ostream in;
	 char chdim[7]={0,0,0,0,0,0,0};
	 cout<<"int cin.get(): "<<endl;
	 cin.get(chdim,6,'\n');
	 cout.write(chdim,6);
	 cout<<endl;
	 cin.get();
	 cout<<"cin.get(char ch) : "<<endl;
	 char ch;
	 cin.get(ch);
	 cout.put(ch);
	 cout<<endl;
	//
	 cin.get();
	 cout<<"cin.getline(char* ch,nCount,\\n)"<<endl;
	 cin.getline(chdim,6,'\n');
	 cout.write(chdim,6);
	 cout<<endl;
	//
	 char dim[20];
	 fstream fio;
	 fio.open(".\\test.txt",ios::in);
	 fio.read(dim,20);
	 cout.write(dim,20);
	 fio.close();
	 cout<<endl;
}