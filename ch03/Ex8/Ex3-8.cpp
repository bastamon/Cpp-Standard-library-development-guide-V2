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
	myvt.insert(myvt.begin(),-1);
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	myvt.insert(myvt.end(),-2);
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	vector<int> vt2;
	vt2.push_back(-8);
	vt2.push_back(-9);

	myvt.insert(myvt.end(),vt2.begin(),vt2.end());
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	myvt.insert(myvt.begin(),3,0);
	for_each(myvt.begin(),myvt.end(),OutToScreen);
	cout<<endl;
	myvt.clear();

}