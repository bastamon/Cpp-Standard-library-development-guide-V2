#include <iostream>
#include <string>
using namespace std;
template <typename T>void print(const T& var)
{
	cout<<var<<endl;
}

void main()
{
	string str("Hello Beijing!");
	print(str);
	cin.get();
}