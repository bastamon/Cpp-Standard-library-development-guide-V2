#pragma warning(disable:4786)
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void print(double& Ele)
{
	cout<<Ele<<" ";
}
void main()
{
	set<double> s1,s2;
	s1.insert(11);
	s1.insert(21);
	s1.insert(17);
	s1.insert(19);
	s1.insert(9);
	s1.insert(13);
	cout<<"s1: "<<endl;
	for_each(s1.begin(),s1.end(),print);
	cout<<endl;
    s2=s1;
	cout<<"s2: "<<endl;
	for_each(s2.begin(),s2.end(),print);
	cout<<endl;
    s2.insert(31);
	s2.insert(24);
	cout<<"s2: "<<endl;
	for_each(s2.begin(),s2.end(),print);
	cout<<endl;
    s1.swap(s2);
	cout<<"s1: "<<endl;
	for_each(s1.begin(),s1.end(),print);
	cout<<endl;
	cout<<"s2: "<<endl;
	for_each(s2.begin(),s2.end(),print);
	cout<<endl;
	set<double>::iterator its;
	set<double>::reverse_iterator rits;
	its=s1.begin();
	cout<<"The first Element of sequence \'s1\':"<<*its<<endl;
 	its=s1.end();
	cout<<"The last Element of sequence \'s1\':"<<*(--its)<<endl;
	rits=s1.rbegin();
	cout<<"The first Element of sequence in reverse direction.\'s1\':"<<*rits<<endl;
	rits=s1.rend();
	cout<<"The last Element of sequence in reverse direction.\'s1\':"<<*(--rits)<<endl;
}