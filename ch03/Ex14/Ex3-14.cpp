#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print(double& Ele)
{
	cout<<Ele<<" ,";
}
void main()
{
	list<double>mylist;
	mylist.push_back(11.1);
	mylist.push_back(21.5);
	mylist.push_back(31.6);
	mylist.push_back(41.7);
	int count=mylist.size();
	for_each(mylist.begin(),mylist.end(),print);
	cout<<endl;
	list<double>::iterator Iter_S;
	Iter_S=mylist.begin();
	cout<<"The third element is "<<*(++(++(++Iter_S)))<<endl;
}