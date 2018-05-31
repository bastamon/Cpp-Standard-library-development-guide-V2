#include <iostream>
#include <string>
using namespace std;
template <class T1,class T2> void print(T1& ii, T2& jj)
{
   cout<<ii<<endl;
   cout<<jj<<endl;
}
void main()
{
  string strA("Hello  Beijing!");
  int B=50;
  print(strA,B);
  cin.get();
}