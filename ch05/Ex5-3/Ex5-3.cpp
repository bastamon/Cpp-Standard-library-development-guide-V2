#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6};
	deque<int> d1;
	cout<<"deque d1(1): "<<endl;
	copy(dim,dim+6,back_inserter(d1));
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"deque d1(2): "<<endl;
    front_inserter(d1)=11;
	front_inserter(d1)=22;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"deque d1(3): "<<endl;
	copy(d1.begin(),d1.end(),front_inserter(d1));
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	inserter(d1,d1.end())=33;
	inserter(d1,d1.end())=44;
	cout<<"deque d1(4): "<<endl;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	deque<int> d2;
	copy(d1.begin(),d1.end(),inserter(d2,d2.begin()));
	cout<<"deque d2(5): "<<endl;
	copy(d2.begin(),d2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;		
}