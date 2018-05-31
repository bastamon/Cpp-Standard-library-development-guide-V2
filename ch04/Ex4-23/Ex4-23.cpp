#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
void main()
{
	deque<int> d1;
	vector<int> v1;
	int dim[]={1,2,3};
	v1.assign(dim,dim+3);
	cout<<"vector v1:  ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"queue d1(Original):  ";
	copy(v1.begin(),v1.end(),back_inserter(d1));
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	while(next_permutation(d1.begin(),d1.end()))
	{
		copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
		cout<<endl;
	}
	cout<<"queue d1(排序后):  ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;

	cout<<"queue d1(准备重新按降序排列):  ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	while(prev_permutation(d1.begin(),d1.end()))
	{
		copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
		cout<<endl;
	}
	cout<<"queue d1(降序排列后):  ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	while(prev_permutation(d1.begin(),d1.end()))
	{
		copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
		cout<<endl;
	}
	cout<<"queue d1(再次降序排列后):  ";
	copy(d1.begin(),d1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}