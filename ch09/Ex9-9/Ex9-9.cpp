#include <iostream>
//#include <vector>
// #include <set>
#include <algorithm>
#include <ostream>
using namespace std;
//ostream& operator<<(ostream& osin, const CInt& rhs);
class CInt{
public:
	CInt(int n=0):m_nVal(n)
	{};
	CInt(const CInt& rhs):m_nVal(rhs.m_nVal)
	{};
	CInt& operator=(const CInt& rhs)
	{
		m_nVal=rhs.m_nVal;
		return *this;
	}
	bool operator<(const CInt& rhs) const
	{
		return (m_nVal<rhs.m_nVal);
	}
	friend ostream& operator<<(ostream& osIn, const CInt& rhs )
	{
		osIn<<"CInt("<<rhs.m_nVal<<")";
		return osIn;
	}
private:
	int m_nVal;
};
bool mod_greater(int elem1, int elem2)
{
   if ( elem1 < 0 ) 
      elem1 = - elem1;
   if ( elem2 < 0 ) 
      elem2 = - elem2;
   return elem1 > elem2;
}
void main()
{
	int a=6;
	int b=7;
	int c=10;
	int d=21;
//	const int res=min(a,b,mod_greater);
//	const int res2=min(b,c);
	//cout<<"max between a, b : "<<res<<endl; 
	//cout<<"max between b, c : "<<res2<<endl; 
}