#include <iostream>
using namespace std;
int Factor(int n)
{
	int answer=0;
	if(n==1)
		return (1);
	answer=Factor(n-1)*n;
	return answer;
}

void main()
{
	int n=5;
	int result=0;
	result=Factor(n);
	cout<<"5!= 5x4x3x2x1 = "<<result<<" "<<endl;
	cin.get();
}