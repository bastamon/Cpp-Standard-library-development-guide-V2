#include <iostream>
#include <stack>
using namespace std;
void main()
{
	stack<int> st;
	for(int i=0;i<10;i++)
		st.push(i);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	cin.get();
}