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
bool isEven(int elem)
{
   return elem%2==0;
}
void main()
{
   vector <int> myvector;
   FillValue(myvector, 1,10);
   for_each(myvector.begin(),myvector.end(),print);
   cout<<endl;
   int ct=count(myvector.begin(),myvector.end(),4);
   int ctif=count_if(myvector.begin(),myvector.end(),isEven);
   int ctg=count_if(myvector.begin(),myvector.end(),bind2nd(greater<int>(),2));
   cout<<"Number of the element equals to 3:"<< ct<<endl;
   cout<<"Number of the elements are  larger than 1:"<<ctif<<endl;
   cout<<"Number of the elements are larger than 2: "<<ctg<<endl;
   cout<<endl;
}