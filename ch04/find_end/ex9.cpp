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
   vector <int> subvector;
   FillValue(myvector, -3,12);
   FillValue(myvector, -3,6);
   FillValue(subvector,-1,3);
   for_each(myvector.begin(),myvector.end(),print);
   cout<<endl;
   for_each(subvector.begin(),subvector.end(),print);
   cout<<endl;

   vector<int>::iterator pos1;
//   pos1=find_first_of(myvector.begin(),myvector.end(),subvector.begin(),subvector.end());
  pos1=find_end(myvector.begin(),myvector.end(),subvector.begin(),subvector.end());

   if(pos1!=myvector.end())
   {
// 	   cout<<"��һ���Ӵ���ԭ���е�λ��: "<<distance(myvector.begin(),pos1)+1<<endl;
	   cout<<"���һ����������ԭ���е�λ��: "<<distance(myvector.begin(),pos1)+1<<endl;
   }
   else
   {
	   cout<<"û����������Ҫ���Ӵ�."<<endl;
   }
//   vector<int>::reverse_iterator rpos;
//   rpos=find_first_of(myvector.rbegin(),myvector.rend(),subvector.begin(),subvector.end());
//   cout<<"ԭ�������һ���ִ���λ��: "<<distance(myvector.begin(),rpos.base())<<endl;
}