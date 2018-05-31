#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void Print(int& Ele)
{
	cout<<Ele<<" ";
}
void main()
{
   list<int>L1,L2;
   not_equal_to<int> Pred;
   L1.push_back(1);
   L1.push_back(2);
   L1.push_back(3);
   L1.push_back(1);
   L1.push_back(2);
   L1.push_back(3);
   L1.push_back(5);
   L1.push_back(7);
   L2.assign(L1.begin(),L1.end());
   for_each(L1.begin(),L1.end(),Print);
   cout<<endl;
   for_each(L2.begin(),L2.end(),Print);
   cout<<endl;
   L1.sort();
   L1.unique();
   for_each(L1.begin(),L1.end(),Print);
   cout<<endl;
   L2.sort();
   L2.unique(Pred);
   for_each(L2.begin(),L2.end(),Print);
   cout<<endl;
}