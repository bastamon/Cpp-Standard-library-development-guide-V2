//#include <utility>
#include <memory>
#include <iostream>
#include <string>
using namespace std;
void main()
{
	auto_ptr<string> str(new string("Goose eggs."));
	auto_ptr<string> str2(str);
	auto_ptr<string> str3(new string("Chicken runs."));

	cout<<str.get()<<endl;
	cout<<str2.get()<<endl;
	cout<<str3.get()<<endl;

	cout<<"str: "<<*str<<endl;
	cout<<"str2: "<<*str2<<endl;
	cout<<"str3: "<<*str3<<endl;
}