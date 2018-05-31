#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print(list<int>& lt)
{
	list<int>::iterator it;
	for(it=lt.begin();it!=lt.end();it++)
	{
		cout<<*it<<" , ";
	}
	cout<<endl;
}
class sequence
{
private:
	int value;
public:
	sequence(int ivalue):value(ivalue)
	{
	}
	int operator()()
	{
		//return value++;
		return ((value++)*2+1);
	}
};
void main()
{
	list<int> col;
	generate_n(back_inserter(col),9,sequence(1));
	print(col);
	generate(++col.begin(),--col.end(),sequence(42));
	print(col);
}