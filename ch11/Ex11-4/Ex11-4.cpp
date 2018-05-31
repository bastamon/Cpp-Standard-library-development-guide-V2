#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v)
{
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
		cout<<" "<<*it<<" ;";
	cout<<endl;
}
void test_one()
{
	int a[]={1,2};
	vector<int> vi;
	vi.assign(a,a+2);
	try{
		vi.resize(vi.max_size()+1);
	}
	catch(length_error& le)
	{
		cout<<le.what()<<endl;
		cout<<typeid(le).name()<<endl;
	}
}
void test_two()
{
	try{
		length_error le("my custom error.");
		throw le;
	}
	catch(length_error& le)
	{
		cout<<le.what()<<endl;
		cout<<typeid(le).name()<<endl;
	}
}
void main()
{
	int ind=0;
	for(;;)
	{
		cout<<"Please Input number(1-3, 3:exit):"<<endl;
		cin>>ind;
		switch (ind)
		{
		case 1:
			test_one();
			break;
		case 2:
			test_two();
			break;
		case 3:
			exit(0);
		}
	}

}