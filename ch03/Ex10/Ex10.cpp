#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void OutToScreenI(int& Ele)
{
	cout<<Ele<<",  ";
}
void main()
{
	vector<int> ci,cd;

 	for(int i=0;i<10;i++)
	{
		ci.push_back(i);
		cd.push_back(i*3);
	}
	cout<<"vector-ci-below:"<<endl;
	for_each(ci.begin(),ci.end(),OutToScreenI);
	cout<<endl;
	cout<<"vector-cd-below:"<<endl;
	for_each(cd.begin(),cd.end(),OutToScreenI);
	cout<<endl;
	cout<<"---------swap---------"<<endl;
	ci.swap(cd);
	cout<<"vector-ci-below:"<<endl;
	for_each(ci.begin(),ci.end(),OutToScreenI);
	cout<<endl;
 	cout<<"vector-cd-below:"<<endl;
	for_each(cd.begin(),cd.end(),OutToScreenI);
	cout<<endl;
}