#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template <class OP1, class OP2, class OP3>class compose_f_gx_hx_t
			:public std::unary_function<typename OP2::argument_type,
			typename OP1::result_type>
{
private:
	OP1 myop1;
	OP2 myop2;
	OP3 myop3;
public:
	compose_f_gx_hx_t(const OP1& o1, const OP2& o2, const OP3& o3):myop1(o1),myop2(o2),myop3(o3)
	{

	}
typename OP1::result_type operator()(const typename OP2::argument_type& x)
	{
		return myop1(myop2(x),myop3(x));
	}
};
template <class OP1, class OP2, class OP3>inline compose_f_gx_hx_t<OP1,OP2,OP3>
	compose_f_gx_hx(const OP1& o1, const OP2& o2, const OP3& o3)
{
	return compose_f_gx_hx_t<OP1,OP2,OP3>(o1,o2,o3);
}
void myprint(vector<int>& v)
{
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}
void main()
{
	vector<int> vt;
	int array[9]={1,2,3,4,5,6,7,8,9};
	vt.assign(array,array+9);
	myprint(vt);
	vector<int>::iterator pos;
	pos=remove_if(vt.begin(),vt.end(),
	compose_f_gx_hx(logical_and<bool>(),bind2nd(greater<int>(),4),bind2nd(less<int>(),7)));
	vt.erase(pos,vt.end());
	myprint(vt);
}