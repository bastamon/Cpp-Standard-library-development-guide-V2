#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void print(int& Ele)
{
	cout<<Ele<<" ";
}
void main()
{
	list<int> L1,L2,L3,L0;
	//list<int>::iterator I1,I2,I3;
	L1.push_back(1);
	L1.push_back(5);
	L2.push_back(2);
	L2.push_back(3);
	L3.push_back(7);
 	L3.push_back(8);
 	L0.push_back(9);
 	L0.push_back(-1);
	cout<<"L1 : ";
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
 	cout<<"L2 : ";
	for_each(L2.begin(),L2.end(),print);
	cout<<endl;
	cout<<"L3 : ";
	for_each(L3.begin(),L3.end(),print);
	cout<<endl;
	cout<<"L0 : ";
	for_each(L0.begin(),L0.end(),print);
	cout<<endl;
 	cout<<"L1 合并 L2:";
	L1.splice(L1.end(),L2);
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
 	cout<<"L2 : ";
	for_each(L2.begin(),L2.end(),print);
	cout<<endl;
 	cout<<"L1 合并 L0 :";
	L1.splice(L1.end(),L0,(++L0.begin()));
	for_each(L1.begin(),L1.end(),print);
	cout<<endl;
 	cout<<"L0 : ";
 	for_each(L0.begin(),L0.end(),print);
 	cout<<endl;
 	cout<<"L1 合并 L3 :";
	L1.splice(L1.end(),L3,L3.begin(),L3.end());
	for_each(L1.begin(),L1.end(),print);  //可知，在list合并之后，所有元素自动按从小到大排序
	cout<<endl;
	cout<<"L3 : ";
	for_each(L3.begin(),L3.end(),print);
	cout<<endl;
 	L1.sort(greater<int>());		      //所有元素自动按从大到小排序
	cout<<"L1 (从大到小排序): ";
	for_each(L1.begin(),L1.end(),print);  
	cout<<endl;
	L1.sort();                            //默认按从小到大排序
	cout<<"L1 (从小到大排序): ";
	for_each(L1.begin(),L1.end(),print);  //所有元素自动按从大到小排序
	cout<<endl;
	cin.get();

}









































