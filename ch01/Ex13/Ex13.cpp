#include <iostream>
#include <list>
//#include <dos.h>
#include <ctime>
using namespace std;	//����
void mysleep(int second)
{
	clock_t st;
	st=clock();
	
	while(clock()-st<second*CLOCKS_PER_SEC);

}

void main()
{
	int count=5;
	float number=0.0;

	list<int> mylist;
	cout<<"����������5������:"<<endl;
	while (count--)
	{
		cin>>number;
		mylist.push_back(number);
	}
	list<int>::iterator iter;
	for(iter=mylist.begin();iter!=mylist.end();iter++)
		cout<<*iter<<" ,";
	cout<<endl;
//	cout<<"������˳�..."<<endl;
	//sleep(1);
	//delay(1000);
//	mysleep(5);
//	cin.get();
	//getchar();

	return;
}