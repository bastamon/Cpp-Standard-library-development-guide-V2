#include <iostream>
#include <new>
using namespace std;
class Myclass{
public:
	int imember;
public:
	Myclass()
	{
		cout<<"Construction MyClass. "<<this<<endl;
	}
	~Myclass()
	{
		imember=0;
		cout<<"Destructing MyClass. "<<this<<endl;
	}
};
void __cdecl myfun()
{
	cout<<"handler test."<<endl;
	throw bad_alloc();
	return;
}

void main()
{
//1
	Myclass* fpM=new Myclass;
	delete fpM;	
	char x[sizeof(Myclass)];
	Myclass* fpM2=new(&x[0]) Myclass;
	fpM2->~Myclass();
	cout<<"The address of x[0] is : "<<(void*)&x[0]<<endl;
	Myclass* fpM3=new Myclass;
	delete fpM3;
//2
	char* int_p;
	try{
	//int* int_p=new int[99999];
	int_p=new char[~size_t(0)/2];
    delete[] int_p;
	}
	catch(bad_alloc &e)
	{
		cout<<e.what()<<endl;
	}
//3
	bad_alloc ba;
	cout<<ba.what()<<endl;
	cin.get();
}