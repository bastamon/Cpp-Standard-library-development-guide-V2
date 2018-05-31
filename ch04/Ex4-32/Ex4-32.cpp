#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
bool mylessthan(int ele1,int ele2)
{
	 if(ele2>3||ele1>3)
		 return true;
	 else
		 return false;
 }

void main()
{
	int source[]={1,4,4,6,1,2,2,3,1,6,6,6,5,7,5,4,4};
	int num=sizeof(source)/sizeof(int);
	vector<int> l1,l11(num,0);
	vector<int> l2(num,0),l3(num,0);
	vector<int>::iterator it1;
	l1.assign(source,source+num);
	cout<<"The Original vector l1 is as below. "<<endl;
	copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	it1=remove(l1.begin(),l1.end(),1);
	l1.erase(it1,l1.end());
	cout<<"The Original vector l1 is as below after removing 1. "<<endl;
 	copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	it1=remove_if(l1.begin(),l1.end(),bind2nd(greater<int>(),6)); //条件表达式bind2nd(greater<int>(),6)
	l1.erase(it1,l1.end());
	cout<<"Removed the elements which are larger than 6. "<<endl;
 	copy(l1.begin(),l1.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	it1=remove_copy(l1.begin(),l1.end(),l2.begin(),6);	//返回目标容器的终止位置
	cout<<"Removing the elements 6. "<<endl;
 	copy(l2.begin(),it1,ostream_iterator<int>(cout,", "));
	cout<<endl;
	it1=remove_copy_if(l2.begin(),l2.end(),l3.begin(),bind2nd(less<int>(),3));	//返回目标容器的终止位置
	cout<<"Removing the elements <3. "<<endl;
 	copy(l3.begin(),it1,ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"Unique the elements. "<<endl;
	it1=unique(l3.begin(),l3.end());
 	copy(l3.begin(),--it1,ostream_iterator<int>(cout,", "));
	cout<<endl;

	cout<<"Unique_copy the elements. "<<endl;
	l1.assign(source,source+num);
	it1=unique_copy(l1.begin(),l1.end(),l11.begin());
 	copy(l11.begin(),--it1,ostream_iterator<int>(cout,", "));
	cout<<endl;
//
	cout<<"Unique_copy(if) the elements. "<<endl;
	l1.assign(source,source+num);
	it1=unique_copy(l1.begin(),l1.end(),l11.begin(),mylessthan);
 	copy(l11.begin(),--it1,ostream_iterator<int>(cout,", "));
	cout<<endl;
}