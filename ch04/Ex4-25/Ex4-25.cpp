#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	vector<int> v1;
	vector<int>v2;
	v1.assign(dim,dim+9);
	v2=v1;
	cout<<"vector v1: ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"vector v2: ";
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	vector<int>::iterator pos1,pos2;
	pos1=partition(v1.begin(),v1.end(),not1(bind2nd(modulus<int>(),2)));
	pos2=stable_partition(v2.begin(),v2.end(),not1(bind2nd(modulus<int>(),2)));
	cout<<"vector v1(modulus, 2, partition): ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"vector v2(modulus, 2, stable_partition): ";
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}