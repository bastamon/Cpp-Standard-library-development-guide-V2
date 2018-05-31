#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
void main()
{
	const int N=10;
	int A[N]={1,3,0,2,5,9,0,0,6,0};
	partition(A,A+N,bind2nd(equal_to<int>(),0));
	copy(A,A+N,ostream_iterator<int>(cout," "));
	cout<<endl;
}