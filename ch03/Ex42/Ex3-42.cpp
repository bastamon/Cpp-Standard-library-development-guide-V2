#pragma warning(disable: 4786)
#include <iostream>
#include <stack>
#include <string>
#include <list>
#include <assert.h>
using namespace std;
void main()
{	 stack<string,list<string> > s1;
	 s1.push("Haidian District.");
	 cout<<"\"Haidian District.\" are pushed into the stack.  "<<endl;
	 s1.push("Chaoyang District.");
	 cout<<"\"Chaoyang District.\" are pushed into the stack.  "<<endl;
 	 s1.push("Xuanwu District.");
	 cout<<"\"Xuanwu District.\" are pushed into the stack.  "<<endl;
	 s1.push("Xicheng District.");
	 cout<<"\"Xicheng District.\" are pushed into the stack.  "<<endl;
	 assert(s1.size()==4);
	 assert(s1.top()=="Xicheng District.") ;
	 cout<<"The Elements are poped from the stack."<<endl;
	 while(s1.size())
	 {	 cout<<"  "<<s1.top()<<endl;
		 s1.pop();
	 }
}