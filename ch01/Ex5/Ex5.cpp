#include <iostream>
#include <list>
using namespace std;
struct PERSON{
	int id;
	int sex;
	double core;
	void clear()
	{
	   id=0;
	   sex=0;
	   core=0;
	}
};
void main()
{
	PERSON temp;
	list<PERSON>C1;
	int id_temp;
	int sex_temp;
	double core_temp;
	int size=0;
	C1.clear();
	int counter=0;
    cout<<"This is a simplest C++ Example!\n "<<endl;
	cout<<"�������ʼ......";
    cin.get();   //   ���س����ȴ�

	while(counter<5)
	{
		cout<<"������ID:";
		cin>>id_temp;
		cout<<"�������Ա�:";
		cin>>sex_temp;
		cout<<"���������:";
		cin>>core_temp;
		temp.id=id_temp;
		temp.sex=sex_temp;
		temp.core=core_temp;
		C1.push_back(temp);
		memset(&temp,0,sizeof(PERSON));
		counter++;
	}
	cout<<"�س�������......";
	cin.get();
	size=C1.size();
	cout<<endl;
	list<PERSON>::iterator Iter;
	for(Iter=C1.begin();Iter!=C1.end();Iter++)
	{
		temp.clear();
		temp=*Iter;
		cout<<"ID: "<<temp.id<<", SEX: "<<temp.sex<<", Core: "<<temp.core<<endl;
	}
	cout<<"������˳�����......";//<<endl;
	cin.get();
    return; 
}