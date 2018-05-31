#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
void main()
{
	const int N=10;
	int A[N]={1,-3,-7,2,5,-9,-2,1,6,-8};
	partition(A,A+N,bind2nd(less<int>(),0));
	copy(A,A+N,ostream_iterator<int>(cout," "));
	cout<<endl;
}