#include <iostream> 
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
void print(int& Ele)
{
	cout<<Ele<<", ";
}
void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	vector<int>v1;
	list<int>l2,l3;
	v1.assign(dim,dim+9);
	cout<<"vector v1: ";
	for_each(v1.begin(),v1.end(),print);
	cout<<endl;
	//l2中的元素分别乘以-1
	transform(v1.begin(),v1.end(),back_inserter(l2),negate<int>());	 
	cout<<"list l2: ";
	for_each(l2.begin(),l2.end(),print);
	cout<<endl;
	//l2中的元素分别乘以10
	transform(l2.begin(),l2.end(),l2.begin(),bind2nd(multiplies<int>(),10)); 
	cout<<"list l2(*10): ";
	for_each(l2.begin(),l2.end(),print);
	cout<<endl;
 	cout<<"list l2(-): ";
	//l2中的元素没有变化
	transform(l2.rbegin(),l2.rend(),ostream_iterator<int>(cout,", "),negate<int>());  
	cout<<endl;
 	cout<<"list l2(/2, reverse_direction): ";
	//l2中的元素没有变化
	transform(l2.rbegin(),l2.rend(),ostream_iterator<int>(cout,", "),bind2nd(divides<int>(),2)); 
	cout<<endl;
//以上是第一种形式的用法
	cout<<"list l2: ";
 	for_each(l2.begin(),l2.end(),print);
	cout<<endl;
	cout<<"list l2(*v1): ";
	transform(v1.begin(),v1.end(),l2.begin(),l2.begin(),multiplies<int>());
	copy(l2.begin(),l2.end(),ostream_iterator<int>(cout,", "));
	cout<<endl;
	cout<<"list l2(squared): ";
	 //l2中的元素没有变化
 	transform(l2.begin(),l2.end(),l2.begin(),ostream_iterator<int>(cout,", "),multiplies<int>()); 
 	cout<<endl;
	cout<<"list l2: ";
 	for_each(l2.begin(),l2.end(),print);
	cout<<endl;
	cout<<"l3( v1+l2 ): ";
	transform(v1.begin(),v1.end(),l2.begin(),back_inserter(l3),plus<int>());
 	for_each(l3.begin(),l3.end(),print);
 	cout<<endl;
	cout<<"cout (l2-l3) : ";
	//l2、l3中的元素没有变化
	transform(l2.begin(),l2.end(),l3.begin(),ostream_iterator<int>(cout,", "),minus<int>()); 
	cout<<endl;
 }
