#include <iostream>
#include <functional>
#include <algorithm>
#include <list> 
using namespace std;
void main()
{
	const int N=9;
	int A[N]={0,0,0,0,1,2,4,8,0};
	list<int> L(A,A+N);
	list<int>::iterator i=find_if(L.begin(),L.end(),bind2nd(not_equal_to<int>(),0));
	cout<<"Elements after initial zeros(if any): ";
	copy(i,L.end(),ostream_iterator<int>(cout," "));
	cout<<endl;
}