#include <iostream>
#include <algorithm>
#include <functional>
#include <list>
#include <assert.h>
using namespace  std;
template <class OP1, class OP2, class OP3>class compose_f_gx_hx_t
:public std::unary_function<typename OP2::argument_type,
typename OP1::result_type>
{
private:
	OP1 myop1;
	OP2 myop2;
	OP3 myop3;
public:
	compose_f_gx_hx_t(const OP1& o1, const OP2& o2, const OP3& o3)
		:myop1(o1),myop2(o2),myop3(o3)
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
void myprint(list<int>& l)
{
	list<int>::iterator it;
	for(it=l.begin();it!=l.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}

void main()
{
	list<int> L;
	generate_n(back_inserter(L),1000,rand);
	// myprint(L);
	list<int>::iterator i=find_if(L.begin(),L.end(),compose_f_gx_hx(logical_and<bool>(),bind2nd(greater_equal<int>(),1),bind2nd(less_equal<int>(),100)));
	assert(i==L.end()||(*i>1&&*i<=100));
	cout<<*i<<endl;
}