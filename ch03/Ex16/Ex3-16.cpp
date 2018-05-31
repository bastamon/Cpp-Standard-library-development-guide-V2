#include <iostream>
#include <list>
using namespace std;
//void print(list<double>& mylist)
template<class T>void print(list<T>& mylist)
{
	list<T>::iterator Iter;
	mylist.reverse();
   for(Iter=mylist.begin();Iter!=mylist.end();Iter++)
   {   cout<<*Iter<<",  ";
   }
   cout<<endl;
}
void main()
{
	list<double> list_One,list_Two, list_Three;
	double Ele=0.0;
	for(int i=0;i<10;i++)
	{ Ele=i+i/10.0;
	  list_One.push_front(Ele);
	}
	cout<<"List_One 输出:"<<endl;
	print(list_One);
	list_Two.assign(5,5.6);
	cout<<"List_Two 输出:"<<endl;
 	print(list_Two);
	list_Three.assign(list_One.begin(),list_One.end());
	cout<<"list_Three 输出:"<<endl;
	print(list_Three);
	list_One.swap(list_Two);
    cout<<"list_one和list_Two交换之后："<<endl;
 	cout<<"List_One 输出:"<<endl;
	print(list_One);
 	cout<<"List_Two 输出:"<<endl;
 	print(list_Two);
	swap(list_One,list_Three);
    cout<<"list_one和list_Three交换之后："<<endl;
  	cout<<"List_One 输出:"<<endl;
	print(list_One);
	cout<<"list_Three 输出:"<<endl;
 	print(list_Three);
}