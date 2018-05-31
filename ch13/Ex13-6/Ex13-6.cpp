#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
template <class op1, class op2>class compose_f_gx_t:public std::unary_function<typename op2::argument_type,
												typename op1::result_type>
{
private:
	op1 myop1;
	op2 myop2;
public:
	compose_f_gx_t(const op1& o1, const op2& o2):myop1(o1),myop2(o2)
	{
	}
	typename op1::result_type operator()(const typename op2::argument_type& x)const
	{
		return myop1(myop2(x));
	}
};
template <class op1, class op2>inline compose_f_gx_t<op1,op2>compose_f_gx(const op1& o1, const op2& o2)
{
	return compose_f_gx_t<op1,op2>(o1,o2);
}
void myprint(vector<int>& vt)
{
	vector<int>::iterator it;
	for(it=vt.begin();it!=vt.end();it++)
		cout<<*it<<" , ";
	cout<<endl;
}
void main()
{
	vector<int>vt;
	int array[9]={1,2,3,4,5,6,7,8,9};
	vt.assign(array,array+9);
	myprint(vt);
	transform(vt.begin(),vt.end(),ostream_iterator<int>(cout," "),compose_f_gx(bind2nd(multiplies<int>(),5),bind2nd(plus<int>(),10)));
	cout<<endl;
}