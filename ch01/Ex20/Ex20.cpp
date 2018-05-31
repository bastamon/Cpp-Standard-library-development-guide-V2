#include <iostream>
using namespace std;
template <typename T>T doubleV(T Val)  //template function
{
	return Val*2;
};
template<typename T1, typename T2>class TwoThing{    //template class
	T1 th1;
	T2 th2;
	T1 th3;
public:
	TwoThing(T1 tt1,T2 tt2)
	{
		th1=tt1;
		th2=tt2;
		th3=doubleV<T1>(tt1);
	}
	void show()
	{
		cout<<th1<<" , "<<th2<<" , "<<th3<<endl;
	}
};
void main()
{
	int m=123;
	double n=456.789;
	TwoThing<int, double> my(m,n);
	my.show();
	return;
}