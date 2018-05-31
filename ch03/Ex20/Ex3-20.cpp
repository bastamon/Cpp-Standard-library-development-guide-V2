#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print(int& Ele)
{
	cout<<Ele<<",  ";
}
bool is_Even(int & Ele)
{
	return (Ele%2==1);
}
void Origin(list<int>& L, int num)
{
	int temp;
	L.clear();
	for(int i=0;i<num;i++)
	{
		temp=i+1;
		L.push_back(temp);
	}
	for_each(L.begin(),L.end(),print);
	cout<<endl;
}
void main()
{
	list<int> L1;
	Origin(L1,9);
	int temp;
	temp=9;
	L1.push_back(temp);
	temp=8;
	L1.push_back(temp);
	cout<<"Ouput the list \'L1\':"<<endl;
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
	L1.remove(9);
	cout<<"Ouput the list \'L1\':"<<endl;
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
	L1.remove_if(bind2nd(not_equal_to<int>(),1));
	cout<<"Ouput the list \'L1\':"<<endl;
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
}
