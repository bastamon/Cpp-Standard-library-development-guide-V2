#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
void main()
{
	int col[]={1,5,7,2,8};
	sort(col,col+5);
	copy(col,col+5,ostream_iterator<int>(cout," "));
	cout<<endl;
}