#include <iostream>
#include <queue>
#include <vector>
#include <list>
#include <queue>
using namespace std;
void print(double& Ele)
{
	cout<<Ele<<", ";
}
template <class T>void Out(priority_queue <T, deque<T>,less<T> >& p)
{
	 while(!p.empty())
	 {
		 cout<<p.top()<<", ";
		 p.pop();
	 }
	 cout<<endl;
}
template <class T>void OutG(priority_queue <T, deque<T>,greater<T> >& pg)
{
	 while(!pg.empty())
	 {
		 cout<<pg.top()<<", ";
		 pg.pop();
	 }
	 cout<<endl;
}

void main()
{
	priority_queue <double,deque<double>,less<double> >p1,p2;
	p1.push(11.5);
	p1.push(22.5);
	p1.push(32.5);
	p1.push(21.1);
	p1.push(15.6);
	p1.push(8.9);
	p1.push(55.0);
	p2=p1;
    Out(p1);
	p1=p2;
	priority_queue <double,deque<double>,greater<double> >p3;
	while(p2.size())
	{
	   p3.push(p2.top());
	   p2.pop();
	}
	OutG(p3);
}