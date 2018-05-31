#include <iostream>
#include <set>
using namespace std;
void OutPut(set<int> &s)
{
	set<int>::iterator	 it;
	for(it=s.begin();it!=s.end();it++)
		cout<<" "<<*it<<", ";
	cout<<endl;	
}
void OutPutM(multiset<int> &s)
{
	multiset<int>::iterator	 it;
	for(it=s.begin();it!=s.end();it++)
		cout<<" "<<*it<<", ";
	cout<<endl;	
}
void main()
{
   set<int>s1;
   s1.insert(10);
   s1.insert(15);
   s1.insert(25);
   s1.insert(20);
   s1.insert(30);
   s1.insert(33);
   s1.insert(5);
   s1.insert(20);
   OutPut(s1);
   set<int>s2(less<int>());
   s2.insert(10);
   s2.insert(13);
   s2.insert(11);
   s2.insert(19);
   s2.insert(17);
   s2.insert(21);
   OutPut(s2);
   set<int>::allocator_type s1_Alloc;
   s1_Alloc=s1.get_allocator();
   set<int>s3(less<int>(),s1_Alloc);
   s3.insert(1);
   s3.insert(5);
   s3.insert(2);
   OutPut(s3);
   set<int>s4(s1);
   OutPut(s4);
//
   multiset<int>sm1;
   sm1.insert(10);
   sm1.insert(15);
   sm1.insert(25);
   sm1.insert(20);
   sm1.insert(30);
   sm1.insert(33);
   sm1.insert(5);
   sm1.insert(20);
   OutPutM(sm1);

}