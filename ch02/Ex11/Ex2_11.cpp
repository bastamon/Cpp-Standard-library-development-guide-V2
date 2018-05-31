#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str_ch("for");
	string str("Hi, Peter, I'm sick. Please bought some drugs for me.");
	int length=str.length();
	string::size_type m= str.find_first_of('P',0);
	string::size_type rm= str.find_last_of('P',(length-1));
	cout<<"Example-find_first_of(): The position(forward) of 'P' is: "<<(int)m<<endl;
	cout<<"Example-find_last_of(): The position(reverse) of 'P' is: "<<(int)rm<<endl;
	
	string::size_type n= str.find_first_of("some",0);
	string::size_type rn= str.find_last_of("some",(length-1));

	cout<<"Example-find_first_of(): The position(forward) of 'some' is: "<<(int)n<<endl;
	cout<<"Example-find_last_of(): The position(reverse) of 'some' is: "<<(int)rn<<endl;

	string::size_type mo= str.find_first_of("drugs",0,5);
	string::size_type rmo= str.find_last_of("drugs",(length-1),5);
	cout<<"Example-find_first_of(): The position(forward) of 'drugs' is: "<<(int)mo<<endl;
	cout<<"Example-find_last_of(): The position(reverse) of 'drugs' is: "<<(int)rmo<<endl;

	string::size_type no= str.find_first_of(str_ch,0);
	string::size_type rno= str.find_last_of(str_ch,(length-1));
	cout<<"Example-find_first_of(): The position of 'for' is: "<<(int)no<<endl;
	cout<<"Example-find_last_of(): The position of 'for' is: "<<(int)rno<<endl;

	cin.get();	
}