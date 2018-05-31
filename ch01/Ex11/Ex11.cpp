#include <iostream>
#include <fstream>
using namespace std;
void main(int argc,char* argv[])
{
	 ifstream f1;
	 ofstream f2;
	 char filename1[256];
	 char filename2[256];
	 char content[256];
	 cout<<"请输入文件名(源):";
	 cin>>filename1;
	 cout<<"请输入文件名(目的):";
	 cin>>filename2;

	 f1.open(filename1,ios::in); 
	 f2.open(filename2,ios::out);
	 while(!f1.eof())
	 {
		  f1.getline(content,128);
		  f2<<content<<endl;
	 }
	 f1.close();
	 f2.close();
}