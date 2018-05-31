#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
void main()
{
	vector <int> v1;
	istream_iterator<int> inputCin(cin);
	istream_iterator<int> IEof;
	while(inputCin!=IEof)
	{
		*inputCin;
		v1.push_back(*inputCin);
		++inputCin;	
	}
	cout<<"the inputted data: ";
	copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
}