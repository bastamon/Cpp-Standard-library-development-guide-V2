#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print(int& Ele)
{   cout <<Ele<<" ";
}
void main()
{
	list<int> L1,L2;
	L1.push_back(1);
	L1.push_back(2);
	L2.assign(L1.begin(),L1.end());
	cout<<"list L1: ";
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
	cout<<"list L2: ";
 	for_each(L2.begin(),L2.end(),print);
	cout<<endl;
	if(L1==L2)
		cout<<"L1 and L2 are equal!"<<endl;
	L2.push_back(3);
	L1.push_back(1);
	cout<<"list L1: ";
 	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
	cout<<"list L2: ";
 	for_each(L2.begin(),L2.end(),print);
	cout<<endl;
	if(L1<L2)
		cout<<"L1 is less than L2."<<endl;
 	else if(L1>L2)
		cout<<"L1 is greater than L2."<<endl;
	if(L1!=L2)
		cout<<"L1 is not equal to L2."<<endl;
}