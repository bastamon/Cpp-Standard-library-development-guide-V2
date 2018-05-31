#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class student{
public:
	student(const string &a,double b):name(a),score(b)
	{}
	string name;
	double score;
	bool operator<(const student& m) const
	{	return score<m.score;
	}
};
bool name_sort_less(const student& m, const student& n)
{	return m.name<n.name;
}
bool name_sort_greater(const student& m, const student& n)
{	return m.name>n.name;
}
bool score_sort(const student& m, const student& n)
{	return m.score>n.score;
}
void print(student& S)
{	cout<<S.name<<"        "<<S.score<<endl;
}
void Original(vector<student>& V)
{	student st1("Tom", 74);
	V.push_back(st1);
	st1.name="Jimy";
	st1.score=56;
	V.push_back(st1);
	st1.name="Mary";
	st1.score=92;
	V.push_back(st1);
	st1.name="Jessy";
	st1.score=85;
	V.push_back(st1);
	st1.name="Jone";
	st1.score=56;
	V.push_back(st1);
	st1.name="Bush";
	st1.score=52;
	V.push_back(st1);
	st1.name="Winter";
	st1.score=77;
	V.push_back(st1);
 	st1.name="Ander";
	st1.score=63;
	V.push_back(st1);
  	st1.name="Lily";
	st1.score=76;
	V.push_back(st1);
  	st1.name="Maryia";
	st1.score=89;
	V.push_back(st1);
}
void main()
{
	  vector<student> vect;
	  Original(vect);
 	  cout<<"----Before sorted.-----"<<endl;
	  for_each(vect.begin(),vect.end(),print);
	  sort(vect.begin(),vect.end());
	  cout<<"----After sorted by score.-----"<<endl;
	  for_each(vect.begin(),vect.end(),print);
	  sort(vect.begin(),vect.end(),name_sort_less);
	  cout<<"----After sorted by name.-----"<<endl;
	  for_each(vect.begin(),vect.end(),print);
	  sort(vect.begin(),vect.end(),score_sort);
	  cout<<"----After sorted by score.-----"<<endl;
	  for_each(vect.begin(),vect.end(),print);
	  sort(vect.begin(),vect.end(),name_sort_greater);
	  cout<<"----After sorted by name.-----"<<endl;
	  for_each(vect.begin(),vect.end(),print);
}