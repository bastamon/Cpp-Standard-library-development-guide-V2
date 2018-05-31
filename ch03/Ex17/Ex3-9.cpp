#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void OutToScreen(int& Ele)
{
	cout<<Ele<<", ";
}
void main()
{
	list<int> mylt;
	for(int i=0;i<10;i++)
		mylt.push_back(i);
	for_each(mylt.begin(),mylt.end(),OutToScreen);
	cout<<endl;
	cout<<"---------------------------"<<endl;
	while(!mylt.empty())
	{
	mylt.pop_back();
	for_each(mylt.begin(),mylt.end(),OutToScreen);
	cout<<endl;
	}
	mylt.clear();
	for(int j=0;j<10;j++)
		mylt.push_back(j);
	for_each(mylt.begin(),mylt.end(),OutToScreen);
 	cout<<endl;
	cout<<"---------------------------"<<endl;
	while(!mylt.empty())
	{
	mylt.erase(mylt.begin());
	for_each(mylt.begin(),mylt.end(),OutToScreen);
	cout<<endl;
	}
}