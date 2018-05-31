#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
void print(int& ele)
{
	cout<<ele<<", ";
}
void main()
{
	int dim[]={1,2,3,4,5,6,7,8};
	vector<int> v1,v2;
	list<int> l1,l2;
	v1.assign(dim,dim+8);
	reverse(v1.begin(),v1.end());
	cout<<"vector v1: ";
	for_each(v1.begin(),v1.end(),print);
	cout<<endl;
	copy(v1.rbegin(),v1.rend(),back_inserter(l1));
	cout<<"list l1: ";
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
	reverse(v1.begin()+2,v1.end()-2);
	cout<<"vector v1: ";
	for_each(v1.begin(),v1.end(),print);
	cout<<endl;
	list<int>::iterator posf=l1.begin();
	list<int>::iterator pose=l1.end();
	advance(posf,2);
	advance(pose,-2);
	reverse(posf,pose);
	cout<<"list l1: ";
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
	reverse_copy(v1.begin(),v1.end(),back_inserter(v2));
	cout<<"vector v2: ";
	for_each(v2.begin(),v2.end(),print);
	cout<<endl;
	cout<<"list l2: ";
	reverse_copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}