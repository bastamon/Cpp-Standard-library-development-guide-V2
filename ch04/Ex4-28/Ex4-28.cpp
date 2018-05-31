#include <iostream>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;
void main()
{
	int dim[]={29,23,20,22,17,15,26,51,19,12,35,40};
	deque<int> d1;
	copy(dim,dim+12,back_inserter(d1));
	cout<<"Dim is below: "<<endl;
	copy(dim,dim+12,ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"deque d1 is below: "<<endl;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
//
	random_shuffle(d1.begin(),d1.end());
	cout<<"deque d1 is first shuffled randomly: "<<endl;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
//
	nth_element(d1.begin(),d1.begin()+4,d1.end());
	cout<<"deque d1 is below(after sorted by nth_element algorithm): "<<endl;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
//
	random_shuffle(d1.begin(),d1.end());
	cout<<"Secondly deque d1 is shuffled randomly : "<<endl;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
//
	nth_element(d1.begin(),d1.begin()+6,d1.end(),greater<int>());
	cout<<"deque d1 is below(after sorted by nth_element algorithm): "<<endl;
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}