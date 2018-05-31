#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
void main()
{
	const int N=10;
	int A[N]={1,-3,-7,2,5,-9,-2,1,6,-8};
	vector<int>V(A,A+N);
	vector<int>v2;
 	sort(V.begin(),V.end(),greater<int>());  //排序
	copy(V.begin(),V.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	remove_copy_if(V.begin(),V.end(),back_inserter(v2),bind2nd(less_equal<int>(),-7));//大于等于
	cout<<"Element remained : ";
	copy(v2.begin(),v2.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
	vector<int>::iterator i=find_if(V.begin(),V.end(),bind2nd(greater_equal<int>(),6));
	cout<<*i<<endl;
}