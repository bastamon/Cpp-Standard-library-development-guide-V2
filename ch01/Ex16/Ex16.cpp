#include <iostream>
#include <string>
using namespace std;
template <class T> void print(T& ii, T& jj)
{
   cout<<ii<<endl;
   cout<<jj<<endl;
}
void main()
{
  string strA("Hello  Beijing!");
  string strB("I am a programmer!");
  print(strA,strB);
  cin.get();
}