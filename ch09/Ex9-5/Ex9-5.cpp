#include <memory>
#include <iostream>
using namespace std;
struct Date{
	int month;
	int day;
	int year;
};
void main()
{
	Date* birthday=new Date;
	birthday->month=6;
	birthday->day=24;
	birthday->year=2012;
	cout<<"This day is : "<<birthday->month<<"/"<<birthday->day<<"/"<<birthday->year;
	cout<<endl;
	delete birthday;
}