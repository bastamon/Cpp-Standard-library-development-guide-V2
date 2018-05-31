#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void main()
{
	//序列中元素发生变化之后，二叉树全部重新排列
	vector<double> v1;
	double dim[]={1.2, 4.3, 5.6, 2.3, 7.8, 8.2, 4.2, 8.1, 5.3};
	int cnt=sizeof(dim)/sizeof(double);
	v1.assign(dim,dim+cnt);
	cout<<"The Original Vector Elements are below: "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
	//make_heap
	make_heap(v1.begin(),v1.end());
	cout<<"The heap is below made by the vector v1: "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
	pop_heap(v1.begin(),v1.end());   //
	v1.pop_back();     //移除最后一个元素
	cout<<"The heap is below which the first element has been erased. : "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
	//push
	v1.push_back(13.2);
	push_heap(v1.begin(),v1.end());
	cout<<"The heap is below which the new element has been pushed. : "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
	//sort_heap;  after sort_heap, the vector will not be a heap.
	sort_heap(v1.begin(),v1.end());
	cout<<"After the heap is sorted by \'sort_heap\', The vector is not a heap. : "<<endl;
	copy(v1.begin(),v1.end(),ostream_iterator<double>(cout,", "));
	cout<<endl;
}