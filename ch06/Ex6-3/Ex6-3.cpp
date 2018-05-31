#include <iostream>
#include <valarray>
//#include <>
using namespace std;
void print(valarray<int>& array )
{
	int size=array.size();
	for(int i=0;i<size;i++)
		cout<<array[i]<<", ";
	cout<<endl;
}
int fn(int ele)
{
   int r=0;
   r=ele*2;
   return r;
}
void main()
{
   int dim[]={1,2,-3,4,5,6,-7,8,9};
   valarray<int> val1(10);
   valarray<int> val2(-1,10);
   valarray<int> val3(dim,sizeof(dim)/sizeof(int));
   valarray<int> val4(val2);
   valarray<int> val5;
   cout<<"valarray val1: "<<endl;
   print(val1);
   cout<<"valarray val2: "<<endl;
   print(val2);
   cout<<"valarray val3: "<<endl;
   print(val3);
   cout<<"valarray val4: "<<endl;
   print(val4);
   val5=abs(val3);
   cout<<"abs(val3)= "<<endl;
   print(val5);
   int s=val3.size();
   int ma=val3.max();
   int mi=val3.min();
   cout<<"The size of val3 is : "<<s<<endl;
   cout<<"The maximum value in val3 is : "<<ma<<endl;
   cout<<"The minimum value in val3 is : "<<mi<<endl;
   //
   val3.resize(15);
   cout<<"val3 is resized, val3: "<<endl;
   print(val3);
   int He=val3.sum();
   cout<<"The sum of val3 is : "<<He<<endl;
   val5=val3.shift(5);
   cout<<"val3 move 5 bits left. "<<endl;
   print(val5);
   val5=val3.shift(-5);
   cout<<"val3 move 5 bits right. "<<endl;
   print(val5);

   val5=val3.cshift(8);
   cout<<"val3 move 8 bits left circulatedly. "<<endl;
   print(val5);
   val5=val3.cshift(-8);
   cout<<"val3 move 8 bits right. circulatedly"<<endl;
   print(val5);

   val5=val3.apply(&fn);
   cout<<"val3 which has been delt by fn is below : "<<endl;
   print(val5);
   val1.free();
   val2.free();
   val3.free();
   val4.free();
   val5.free();
}