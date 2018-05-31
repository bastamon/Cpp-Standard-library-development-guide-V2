#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print(int& Ele)
{
   cout<<Ele<<", ";
}
bool doubleS(int ele1,int ele2)
{
	return ele1*2==ele2;
}
void main()
{
   vector<int> v1;
   vector<int>::iterator it;
   v1.push_back(1);
   v1.push_back(3);
   v1.push_back(3);
   v1.push_back(2);
   v1.push_back(4);
   v1.push_back(5);
   v1.push_back(5);
   v1.push_back(0);
   for_each(v1.begin(),v1.end(),print);
   cout<<endl;
   it=adjacent_find(v1.begin(),v1.end());
   if(it!=v1.end())
   {
	   cout<<"The position is :"<<distance(v1.begin(),it)+1<<endl;
   }
   it=adjacent_find(v1.begin(),v1.end(),doubleS);
   if(it!=v1.end())
   {
	   cout<<"The position is :"<<distance(v1.begin(),it)+1<<endl;
   }
}