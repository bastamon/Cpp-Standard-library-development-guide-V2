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
void main()
{
   vector <int> myvector;
   FillValue(myvector, -3,12);
   for_each(myvector.begin(),myvector.end(),print);
   cout<<endl;
   vector <int>::iterator pos1;
   pos1=search_n(myvector.begin(),myvector.end(),4,3);
   if(pos1!=myvector.end())
   {
	   cout<<"4����������3��Ԫ�ص���ʼλ�ã�"<<distance(myvector.begin(),pos1)+1<<endl;
   }
   else
   {
	   cout<<"û��4����������3��Ԫ��"<<endl;
   }
   vector<int>::iterator pos2;
   pos2=search_n(myvector.begin(),myvector.end(),4,3,greater<int>());
   if(pos2!=myvector.end())
   {
	  cout<<"4����������3��Ԫ�ص���ʼλ�� :"<<distance(myvector.begin(),pos2)+1<<endl;
   }
   else
   {
	  cout<<"��һ������3��Ԫ��λ�� :"<<distance(myvector.begin(),pos2)+1<<endl;
   }
}