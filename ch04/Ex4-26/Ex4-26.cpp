#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <functional>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	deque<int> d1;
	copy(dim,dim+9,back_inserter(d1));
	//copy(dim,dim+9,back_inserter(d1));
	cout<<"deque d1(Original): ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	//sort(d1.begin(),d1.end());
	stable_sort(d1.begin(),d1.end());
	cout<<"deque d1(sorted by '<'): ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	//sort(d1.begin(),d1.end(),greater<int>());
	stable_sort(d1.begin(),d1.end(),greater<int>());
	cout<<"deque d1(sorted by '>'): ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}
