#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;

void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	int dim2[]={11,12,13,14,15,16,17,18,19};
	vector<int> v1;
	vector<int> v2;
	v1.assign(dim,dim+9);
	cout<<"vector v1: ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	copy(dim2,dim2+9,back_inserter(v2));
	cout<<"vector v2: ";
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	swap(v1,v2);
 	cout<<"vector v1: ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
 	cout<<"vector v2: ";
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	swap_ranges(v1.begin(),v1.begin()+5,v2.begin());
 	cout<<"vector v1: ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
 	cout<<"vector v2: ";
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}