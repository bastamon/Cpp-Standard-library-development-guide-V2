#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	vector<int> v1,v2;
	v1.assign(dim,dim+9);
	v2.assign(v1.begin(),v1.end());
	cout<<"vector v1: ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"vector v1(first rotation): ";
	rotate(v1.begin(),v1.begin()+4,v1.end());
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"vector v1(second rotation): ";
	rotate_copy(v1.begin(),v1.begin()+3,v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"vector v1(third rotation): ";
	rotate(v2.begin(),v2.begin()+2,v2.end()-3);
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"vector v1(fourth rotation): ";
	rotate_copy(v2.begin(),v2.begin()+3,v2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;	
}