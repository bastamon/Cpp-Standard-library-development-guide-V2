#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
void Print(int& Ele)
{
	cout<<Ele<<" ";
}
void main()
{
   deque<int>D1;
   deque<int>D2(5);
   deque<int>D3(10,2),D31(10,3);
   deque<int>D4(D3);
   deque<int>D5(D31.begin(),D31.end());
   cout<<"D1:"<<endl;
   for_each(D1.begin(),D1.end(),Print);
   cout<<endl;
   cout<<"D2:"<<endl;
   for_each(D2.begin(),D2.end(),Print);
   cout<<endl;
   cout<<"D3:"<<endl;
   for_each(D3.begin(),D3.end(),Print);
   cout<<endl;
   cout<<"D31:"<<endl;
   for_each(D31.begin(),D31.end(),Print);
   cout<<endl;
   cout<<"D4:"<<endl;
   for_each(D4.begin(),D4.end(),Print);
   cout<<endl;
   cout<<"D5:"<<endl;
   for_each(D5.begin(),D5.end(),Print);
   cout<<endl;
///////////////////////////////////////////
   int size=D2.size();
   cout<<"The size of D2: "<<size<<endl;
   int Msize=D2.max_size();
   cout<<"The maxsize of D2: "<<Msize<<endl;
   D31.resize(5,'A');
   cout<<"D31:"<<endl;
   for_each(D31.begin(),D31.end(),Print);
   cout<<endl;

   D31.resize(7,0);
   cout<<"D31:"<<endl;
   for_each(D31.begin(),D31.end(),Print);
   cout<<endl;
}