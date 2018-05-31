#include <iostream>
#include <list>
using namespace std;
void main()
{
	list<double>mylist;
	mylist.push_back(10.2);
	bool empty=0;
	if(mylist.empty())
		cout<<"The list is empty!"<<endl;
	else
	{
		empty=mylist.empty();
		cout<<mylist.front()<<", "<<empty<<endl;
	}
}