#pragma warning(disable:4786)
#include <iostream>
#include <map>
using namespace std;
void main()
{
   typedef 	map<int,double,less<int> > MAP;
   typedef 	multimap<int,double, greater<int> > M_MAP;
   MAP m1;
   M_MAP m2;
   MAP::key_compare kc1=m1.key_comp();
   M_MAP::key_compare kc2=m2.key_comp();
   bool r=kc1(2,3);
   bool M_r=kc2(3,4);
   if(r)
   {
		cout<<"kc1(2,3)返回值为true. "<<endl;
   }
   else
   {
		cout<<"kc1(2,3)返回值为false. "<<endl;

   }
   if(M_r)
   {
	 cout<<"kc2(2,3)返回值为true. "<<endl;
   }
   else
   {
	cout<<"kc2(2,3)返回值为false. "<<endl;
   }
}