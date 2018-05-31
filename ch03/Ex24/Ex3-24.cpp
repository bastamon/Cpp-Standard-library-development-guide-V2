#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
void Print(int& ele)
{
	cout<<ele<<" ";
}
void main()
{
   deque<int> D1;
   D1.push_front(0) ;
   D1.push_front(1);
   D1.push_front(2);
   D1.push_front(3);
   D1.push_front(4);
   D1.push_back(1);
   D1.push_back(2);
   D1.push_back(3);
   D1.push_back(4);
   cout<<"D1:"<<endl;
   for_each(D1.begin(),D1.end(),Print);//注意观察元素在序列中的排列位置
   cout<<endl;
   D1[4]=9;
   cout<<"D1:"<<endl;
   for_each(D1.begin(),D1.end(),Print);//注意观察元素在序列中的排列位置
   cout<<endl;
   
}