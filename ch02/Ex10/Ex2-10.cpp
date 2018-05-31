#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str_ch("for");
	string str("Hi, Peter, I'm sick. Please bought some drugs for me.");
	
	string::size_type m= str.find('P',5);
	string::size_type rm= str.rfind('P',5);
	cout<<"Example-find(): The position(forward) of 'P' is: "<<(int)m<<endl;
	cout<<"Example-rfind(): The position(reverse) of 'P' is: "<<(int)rm<<endl;
	
	string::size_type n= str.find("some",0);
	string::size_type rn= str.rfind("some",0);

	cout<<"Example-find(): The position(forward) of 'some' is: "<<(int)n<<endl;
	cout<<"Example-rfind(): The position(reverse) of 'some' is: "<<(int)rn<<endl;

	string::size_type mo= str.find("drugs",0,5);
	string::size_type rmo= str.rfind("drugs",0,5);
	cout<<"Example-find(): The position(forward) of 'drugs' is: "<<(int)mo<<endl;
	cout<<"Example-rfind(): The position(reverse) of 'drugs' is: "<<(int)rmo<<endl;

	string::size_type no= str.find(str_ch,0);
	string::size_type rno= str.rfind(str_ch,0);
	cout<<"Example-find(): The position of 'for' is: "<<(int)no<<endl;
	cout<<"Example-rfind(): The position of 'for' is: "<<(int)rno<<endl;

	cin.get();	
}