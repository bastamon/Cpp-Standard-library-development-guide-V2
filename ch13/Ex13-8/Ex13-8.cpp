#include <functional>
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace  std;
template <class OP1, class OP2, class OP3>
class compose_f_gx_hx_t:public std::binary_function<
		typename OP2::argument_type,
		typename OP3::argument_type,
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
	typename OP1::result_type operator()(const typename OP2::argument_type& x,
		const typename OP3::argument_type& y)const
	{
		return myop1(myop2(x),myop3(y));
	}
};
template <class OP1, class OP2, class OP3>inline compose_f_gx_hx_t<OP1,OP2,OP3>
	compose_f_gx_hy(const OP1& o1, const OP2& o2, const OP3& o3)
{
	return compose_f_gx_hx_t<OP1,OP2,OP3>(o1,o2,o3);
}
void main()
{
	string s("Internationalization");
	string sub("Nation");
	string ::iterator pos;
	pos=search(s.begin(),s.end(),sub.begin(),sub.end(),compose_f_gx_hy(equal_to<int>(),ptr_fun(::toupper),ptr_fun(::toupper)));
	if(pos!=s.end())
	{
		cout<<"\""<<sub<<"\" is part of \""<<s<<"\""<<endl;
	}
}

