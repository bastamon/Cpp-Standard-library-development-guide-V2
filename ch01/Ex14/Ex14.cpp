#include <iostream>
using namespace std;
template <class T> class BClass{
public:
	static int count;
	static long size;
public:
	static long GetSize(){
	 return size;
	 }
	static int GetCount(){
	 return count;
	 }
};
template <class T> T BClass<T>::count=0;
template <class T> long BClass<T>::size=2;
void main()
{
  int cnt;
  long nsize;
  BClass<int>  myO;
  myO.count=2;
  myO.size=3;
  cnt=myO.GetCount();
  nsize= myO.GetSize();
  cout<<cnt<<" ,"<<nsize<<endl;
}