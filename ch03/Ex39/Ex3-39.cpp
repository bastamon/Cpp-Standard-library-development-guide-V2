#pragma warning(disable:4786)
#include <iostream>
#include <map>
using namespace std;
void main()
{
	typedef map<int,double> MAP;
	MAP::allocator_type m1_alloc;
	MAP::allocator_type m2_alloc;
	MAP::allocator_type m3_alloc;
	MAP::allocator_type m4_alloc;

	MAP m1,m2,m3;
	m1_alloc=m1.get_allocator();
	m2_alloc=m2.get_allocator();
	m3_alloc=m3.get_allocator();
	MAP m4(less<int>(),m1_alloc);
	m4_alloc=m4.get_allocator();
	if(m1_alloc==m4_alloc)
	{
		cout<<"配置器相同！ "<<endl;
	}
	else
	{
		cout<<"配置器不同. "<<endl;
	}
}