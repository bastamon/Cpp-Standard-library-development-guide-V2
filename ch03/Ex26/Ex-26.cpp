#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
void Out(double& Ele)
{	cout.width(5);
	cout.precision(1);
	cout<<std::fixed<<Ele<<" ";
}
void main()
{
	 deque<double>D1,D2;
	 for(int i=0;i<10;i++)
	 {	 D1.push_front(90+i/10.0);
	 }
	 cout<<"All the element of Ë«¶ËÐòÁÐ D1:" <<endl;
	 for_each(D1.begin(),D1.end(),Out);
	 cout<<endl;
	 for(i=0;i<10;i++)
	 {	 D2.push_front(80+i/10.0);
	 }
	 cout<<"All the element of Ë«¶ËÐòÁÐ D2:" <<endl;
	 for_each(D2.begin(),D2.end(),Out);
	 cout<<endl;
	 D1.swap(D2);
	 cout<<"D1 swap D2 :"<<endl;
	 cout<<"All the element of Ë«¶ËÐòÁÐ D1:" <<endl;
	 for_each(D1.begin(),D1.end(),Out);
	 cout<<endl;
	 cout<<"All the element of Ë«¶ËÐòÁÐ D2:" <<endl;
	 for_each(D2.begin(),D2.end(),Out);
	 cout<<endl;
///²åÈëÈý¸öÔªËØ
	 D1.insert(D1.begin(),-1.0);
	 D1.insert(D1.end(),-1.0);
	 D1.insert(D1.begin()+6,-0.0);
	 cout<<"All the element of Ë«¶ËÐòÁÐ D1:" <<endl;
	 for_each(D1.begin(),D1.end(),Out);
	 cout<<endl;
//É¾³ýÁ½¸öÔªËØ
	 D1.erase(D1.begin()+1);
	 D1.erase(D1.begin()+10);
	 cout<<"All the element of Ë«¶ËÐòÁÐ D1:" <<endl;
	 for_each(D1.begin(),D1.end(),Out);
	 cout<<endl;
//
	 D2.clear();
	 cout<<"D2 has  been already cleared!"<<endl;
	 cout<<"All the element of Ë«¶ËÐòÁÐ D2:" <<endl;
	 for_each(D2.begin(),D2.end(),Out);
	 cout<<endl;
//
	 deque<double>::iterator it=find(D1.begin(),D1.end(),80.5);
	 int step=(it-D1.begin());
	 cout<<"find 80.5. in D1 ,  its Index: "<<step<<" ."<<endl;
}