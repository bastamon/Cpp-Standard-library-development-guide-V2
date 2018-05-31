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
void main()
{
   vector <int> myvector;
   FillValue(myvector, 1,10);
   for_each(myvector.begin(),myvector.end(),print);
   cout<<endl;
}