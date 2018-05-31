#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <class T>
void FillValue(T& vect, int first, int last)
{
   if(last >= first)
   {
   for(int i=first;i<=last;++i)
	   vect.insert(vect.end(),i);
   }
   else
   {
   cout<<" The indexes is error: last < first. "<<endl;
   }
}
void print(int elem)
{
	cout<<elem<<" ";
}
bool AbsLess(int elem1, int elem2)	   //绝对值比较
{
   return abs(elem1)<abs(elem2);
}
void main()
{
   vector <int> myvector;
   FillValue(myvector, -3,12);
   for_each(myvector.begin(),myvector.end(),print);
   cout<<endl;
   cout<<"minimum: "<<*min_element(myvector.begin(),myvector.end())<<endl;
   cout<<"maximum: "<<*max_element(myvector.begin(),myvector.end())<<endl;
   cout<<"minimum of absolute value: "<<*min_element(myvector.begin(),myvector.end(),AbsLess)<<endl;
   cout<<"maximum of absolute value: "<<*max_element(myvector.begin(),myvector.end(),AbsLess)<<endl;
}