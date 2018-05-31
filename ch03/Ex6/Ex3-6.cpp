#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
void print(const int& temp)
{
	cout<<temp<<endl;
}
void main()
{
    const int ARRAY_SIZE = 8 ;
    int IntArray[ARRAY_SIZE] = { 1, 2, 3, 4, 4, 5, 6, 7 } ;
	vector<int> myvt;
	int* location_index=NULL;
	for(int i=0;i<8;i++)
		myvt.push_back(IntArray[i]);
	for_each(myvt.begin(),myvt.end(),print);
	location_index=find(myvt.begin(),myvt.end(),2);	                        //find
	cout<<"数字2的下标是 :"<<(location_index-myvt.begin())<<endl;
	location_index=find_if(myvt.begin(),myvt.end(),bind2nd(greater<int>(),5));
	cout<<"第一个大于5的数字的下标是 :"<<(location_index-myvt.begin())<<endl;
}