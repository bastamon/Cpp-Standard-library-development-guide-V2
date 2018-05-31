#include <iostream>
#include <algorithm>
#include <memory>
#include <exception>
//using namespace std;
class MyContrainer{
public:
	int* elem;
	int num_elem;
public:
	MyContrainer()
	{
		try{
		elem=new int[128];
		}
		catch(exception& e)
		{
			std::cout<<"exception."<<e.what()<<std::endl;
			exit(0);
		}
	}
	void myswap(MyContrainer& mc)
	{
		std::swap(elem,mc.elem);
		std::swap(num_elem,mc.num_elem);
	}
	void myassign(int* mc_elem,int num)
	{
		memcpy(elem,mc_elem,num*sizeof(int));
		num_elem=num;
	}
	~MyContrainer()
	{
		delete[] elem;
	}
};
inline void myswap(MyContrainer& c1, MyContrainer& c2)
{
	c1.myswap(c2);
}
void print (MyContrainer& c1)
{
	int num=c1.num_elem;
	for(int i=0;i<num;i++)
	{
		std::cout<<" "<<*(c1.elem+i);
	}
	std::cout<<std::endl;
}
void main()
{
	int array_one[10]={1,2,3,4,5,6,7,8,9,0};
	int array_two[10]={11,12,13,14,15,16,17,18,19,20};
	MyContrainer mc1,mc2;
	mc1.myassign(array_one,10);
	std::cout<<"the original mc1: "<<std::endl;
	print(mc1);
	mc2.myassign(array_two,10);
	std::cout<<"the original mc2: "<<std::endl;
	print(mc2);
	mc1.myswap(mc2);
	std::cout<<"the original mc1(swaped): "<<std::endl;
	print(mc1);
	std::cout<<"the original mc2(swaped): "<<std::endl;
	print(mc2);
	myswap(mc1,mc2);
	std::cout<<"the original mc1(swaped twice.): "<<std::endl;
	print(mc1);
	std::cout<<"the original mc2(swaped twice.): "<<std::endl;
	print(mc2);			
}
