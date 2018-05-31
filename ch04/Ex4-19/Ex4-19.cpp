#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Fibonacci(void)
{
    static int r;
    static int f1 = 0;
    static int f2 = 1;
    r = f1 + f2 ;
    f1 = f2 ;
    f2 = r ;
    return f1 ;
}
void main()
{
   vector<int> v1;
   vector<int> v2(5,0),v3(6,0);
   int dim[]={1,2,3,4,5,6,7,8,9};
   v1.assign(dim,dim+9);
   copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
   cout<<endl;
   fill(v1.begin(),v1.begin()+4,9);
   copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
   cout<<endl;
   fill_n(v1.begin(),5,20);
   copy(v1.begin(),v1.end(),ostream_iterator<int>(cout,", "));
   cout<<endl;
   /*----*/
   generate(v2.begin(),v2.end(),rand);
   copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
   cout<<endl;
   /*----*/
   generate_n(v2.begin(),3,rand);
   copy(v2.begin(),v2.end(),ostream_iterator<int>(cout,", "));
   cout<<endl;
   /*--自定义序列---*/
   generate_n(v3.begin(),6,Fibonacci);
   copy(v3.begin(),v3.end(),ostream_iterator<int>(cout,", "));
   cout<<endl;
}