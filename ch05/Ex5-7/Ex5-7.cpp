#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	double Vdim[]={1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	vector<int> v1;
	list<double> l1;
	v1.assign(dim,dim+9);
	copy(Vdim,Vdim+9,back_inserter(l1));
	cout<<"vector v1: "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"list l1: "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
	vector<int>::iterator itV;
	itV=v1.end();
	itV--;
	iter_swap(v1.begin(),itV);
	cout<<"vector v1(swap first.): "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	list<double>::iterator itLs,itLe;
	itLs=l1.begin();
	advance(itLs,2);
	itLe=l1.end();
	advance(itLe,-3);
	iter_swap(itLs,itLe);
	cout<<"list l1 (swap first.): "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
	itV=v1.begin();
	iter_swap(itLs,itV);
	cout<<"vector v1 (swap second.): "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"list l1 (swap second.): "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
}