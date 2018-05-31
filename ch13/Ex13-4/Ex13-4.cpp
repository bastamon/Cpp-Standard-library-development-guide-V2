#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class MeanV{
private:
	long num;
	long sum;
public:
	MeanV():num(0),sum(0)
	{
	
	}
	void operator()(int elem)
	{
		num++;
		sum+=elem;
	}
	double value()
	{
		return static_cast<double>(sum*1.0/num);
	}
};
void myprint(vector<int>& v)
{
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" , ";
	}
	cout<<endl;
}
void main()
{
	vector<int>col;
	int array[8]={1,2,3,4,5,6,7,8};
	col.assign(array,array+8);
	myprint(col);
	MeanV mv=for_each(col.begin(),col.end(),MeanV());
	cout<<"Mean Value: "<<mv.value()<<endl;
}