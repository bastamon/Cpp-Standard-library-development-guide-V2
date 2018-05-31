#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int NUM=5;
void main()
{
	vector<string>names(NUM);
	vector<int>sexs(NUM);
	cout<<"Please Do Exactly As Told. You Will enter\n"<<NUM<<" Personal Name and Their Sex.\n";
	int i=0;
	for(i=0;i<NUM;i++)
	{
		cout<<"Enter title # " <<i+1<<": ";
		getline(cin,names[i]);
		cout<<"Enter sex(0/1) # ";
		cin>>sexs[i];
		cin.get();
	}
	cout<<"Thank you. You entered the following: \n"<<"name/sex"<<endl;
	
	for(i=0;i<NUM;i++)
	{
		cout<<names[i]<<"\t"<<sexs[i]<<endl;
	}
	return;
}