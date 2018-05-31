#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void OutToScreen(int& Ele)
{
	cout<<Ele<<", ";
}
void main()
{
	vector<int> myvt;
	for(int i=0;i<10;i++)
		myvt.push_back(i);
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	cout<<"---------------------------"<<endl;
	while(!myvt.empty())
	{
	myvt.pop_back();
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	}
	myvt.clear();
	for(int j=0;j<10;j++)
		myvt.push_back(j);
	for_each(myvt.begin(),myvt.end(),OutToScreen);
 	cout<<endl;
	cout<<"---------------------------"<<endl;
	while(!myvt.empty())
	{
	myvt.erase(myvt.begin());
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	}
}