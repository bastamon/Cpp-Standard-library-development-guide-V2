#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
    vector<int> v1;
	ostream_iterator<int> iter(cout,"\n");
	v1.assign(dim,dim+9);
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout));
	cout<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,"< "));
	cout<<endl;
	string delim(", ");
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,delim.c_str()));
	cout<<endl;
	*iter=22;
	iter++;
	*iter=33;
	iter++;
	*iter=44;
}