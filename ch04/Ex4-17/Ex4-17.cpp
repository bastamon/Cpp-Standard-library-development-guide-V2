#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>
using namespace std;
void print(int& Ele)
{
	cout<<Ele<<", ";
}
template <class T> class customFun{
public:
    T Parm;
public:
	customFun(const T& _Val):Parm(_Val)
	{}
	int operator()(T&elem ) const
	{
		return elem*Parm;
	}

};
template <class T> class customFun2{
public:
    T Parm;
public:
	customFun2(const T& _Val):Parm(_Val)
	{}
	int operator()(T& elem ,T& elem2 ) const
	{
		return (elem+elem2)*Parm;
	}
};

void main()
{
	int dim[]={1,2,3,4,5,6,7,8,9};
	vector<int>v1,v2;
	list<int> l1;
	v1.assign(dim,dim+9);
	copy(v1.begin(),v1.end(),back_inserter(l1));
	cout<<"vector v1: ";
	for_each(v1.begin(),v1.end(),print);
	cout<<endl;
	transform(v1.begin(),v1.begin()+5, v1.begin(),customFun<int>(4));
 	cout<<"vector v1(transformed): ";
	for_each(v1.begin(),v1.end(),print);
	cout<<endl;
  	cout<<"list l1: ";
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
	transform(v1.begin(),v1.end(),l1.begin(),l1.begin(),customFun2<int>(2));
  	cout<<"vector l1(=(v1+l1)*2): ";
	for_each(l1.begin(),l1.end(),print);
	cout<<endl;
//	transform(v1.begin(),v1.end(),l1.begin(),ostream_iterator<int>(cout,", "),customFun2<int>(2));
//	cout<<endl;
//	transform(v1.begin(),v1.end(),l1.begin(),back_inserter(v2),customFun2<int>(2));
//	cout<<"vector l1(=(v1+l1)*2): ";
//  copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
// 	cout<<endl;
}