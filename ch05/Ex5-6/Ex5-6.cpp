#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	vector<int> v1;
	vector<int>::iterator it;
	v1.assign(dim,dim+9);
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	it=v1.begin();
	advance(it,5);
	cout<<"The sixth element: "<<*it<<endl;
	advance(it,-3);
	cout<<"The third element: "<<*it<<endl;
}