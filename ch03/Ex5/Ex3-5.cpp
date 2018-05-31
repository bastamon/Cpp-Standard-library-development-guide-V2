#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Student{
	int id;
	double score;
};
template <class T> void Original(T& myvt)
{
   Student temp;
   temp.id=1;
   temp.score=90;
   myvt.push_back(temp);
   temp.id=2;
   temp.score=95;
   myvt.push_back(temp);
   temp.id=3;
   temp.score=98;
   myvt.push_back(temp);
   temp.id=4;
   temp.score=97;
   myvt.push_back(temp);
   temp.id=5;
   temp.score=95;
   myvt.push_back(temp);
   temp.id=6;
   temp.score=90;
    myvt.push_back(temp);
}
void out(Student& stu)
{
	cout<<"id: "<<stu.id<<" , score: "<<stu.score<<endl;
}
bool greater95(Student& stu)
{
	if(stu.score>=95.0) 
		return 1;
	else
		return 0;
}
void main()
{
   vector<Student> myvt;
   vector<Student>::iterator iter;
   int countV=0;
   Original(myvt);
   for_each(myvt.begin(),myvt.end(),out);                  //for_eachÀ„∑®
   countV=count_if(myvt.begin(),myvt.end(),greater95);	   //
   cout<<"The Number of the elements >95.0: "<<countV<<endl;    //
}