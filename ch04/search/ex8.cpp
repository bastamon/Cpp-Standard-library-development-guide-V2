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
 bool checkEven(int elem, bool even)
{
	if(even)
	{
		return elem%2==0;
	}
	else
	{
		return elem%2==1;
	}
}
void main()
{
   vector <int> myvector;
   vector <int> subvector;
   bool checkEvenArg[3]={true,false,true};

   FillValue(myvector, -3,12);
   FillValue(subvector,-1,3);
   for_each(myvector.begin(),myvector.end(),print);
   cout<<endl;
   for_each(subvector.begin(),subvector.end(),print);
   cout<<endl;

   vector<int>::iterator pos1;
   pos1=search(myvector.begin(),myvector.end(),subvector.begin(),subvector.end());
   if(pos1!=myvector.end())
   {
	   cout<<"子串在原串中的位置"<<distance(myvector.begin(),pos1)+1<<endl;
   }
   else
   {
	   cout<<"没有搜索到需要的子串"<<endl;
   }
   vector<int>::iterator pos2;
   pos2=search(myvector.begin(),myvector.end(),checkEvenArg,checkEvenArg+3,checkEven);
   cout<<"满足'偶，奇，偶'顺序的子串起始位置："<<distance(myvector.begin(),pos2)+1<<endl;
}