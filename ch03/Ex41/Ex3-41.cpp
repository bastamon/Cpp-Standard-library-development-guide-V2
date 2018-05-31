#include <iostream>
#include <bitset>
#include <string>
using namespace std;
void print(bitset<16>& b)
{  int i=0;
   int bsize=b.size();
   for(i=0;i<bsize;i++)
   {   cout<<b[i];
   }
   cout<<"   :"<<"The size of bitset :"<<bsize<<endl;
}
void main()
{  string str="0011111111111111110000";
   bitset<16> b1;
   bitset<16> b2(25);
   bitset<16> b3(str,2,16);
   print(b1);
   print(b2);
   print(b3);
   int c1=b1.count();
   int c2=b2.count();
   int c3=b3.count();
   cout<<"b1 's count : "<<c1<<", "<<"b2 's count : "<<c2<<", "<<"b3 's count : "<<c3<<", "<<endl;
   bool l1=b1.any();
   bool l2=b2.any();
   bool l3=b3.any();
   cout<<"b1 's any() : "<<l1<<", "<<"b2 's any() : "<<l2<<", "<<"b3 's any() : "<<l3<<", "<<endl;
   bool n1=b1.none();
   bool n2=b2.none();
   bool n3=b3.none();
   cout<<"b1 's none() : "<<n1<<", "<<"b2 's none() : "<<n2<<", "<<"b3 's none() : "<<n3<<", "<<endl;
   bool t1=b1.test(2);
   bool t2=b2.test(2);
   bool t3=b3.test(2);
   cout<<"b1 's test() : "<<t1<<", "<<"b2 's test() : "<<t2<<", "<<"b3 's test() : "<<t3<<", "<<endl;
   cout<<"set(5): "<<endl;
   b1.set(5,1);
   b2.set(5,1);
   b3.set(5,1);
   print(b1);
   print(b2);
   print(b3);
   cout<<"reset(5): "<<endl;
   b1.reset(5);
   b2.reset(5);
   b3.reset(5);
   print(b1);
   print(b2);
   print(b3);
   b1.flip();
   b2.flip();
   b3.flip();
   cout<<"flip: "<<endl;
   print(b1);
   print(b2);
   print(b3);
   unsigned long ul1= b1.to_ulong();
   unsigned long ul2= b2.to_ulong();
   unsigned long ul3= b3.to_ulong();
   cout<<"to_ulong : "<<endl;
   cout<<ul1<<endl;
   cout<<ul2<<endl;
   cout<<ul3<<endl;
   string s1=b1.to_string();
   string s2=b2.to_string();
   string s3=b3.to_string();
   cout<<"to_string"<<endl;
   cout<<s1.c_str()<<endl;
   cout<<s2.c_str()<<endl;
   cout<<s3.c_str()<<endl;
}