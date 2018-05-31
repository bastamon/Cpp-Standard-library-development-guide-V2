#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <fstream>
using namespace std;
class person
{
public:
	string firstname()
	{
		return fname;
	};
	string lastname()
	{
		return lname;
	};
public:
	string fname;
	string lname;
};
class person_sort_rule
{
public:
	bool operator()(person p1, person p2)
	{
		return (p1.lastname()<p2.lastname());
	};
};
string getfirstname(string buffer)
{
	string r;
	size_t index=buffer.find(',');
	if (index!=-1)
		r=buffer.substr(0,index);
	else
		r="-1";
	return r;
}
string getlastname(string buffer)
{
	string r;
	size_t index=buffer.find(',');
	if(index!=-1)
		r=buffer.substr(index+1,buffer.length()-1);
	else
		r="-1";
	return r;
}

void main()
{
	typedef set<person,person_sort_rule>personSet;
	personSet myset;
	myset.clear();
	string myfname,mylname;
	ifstream myfile;
	myfile.clear();//删除该文件流的所有标志
	string filename;
	string buffer;
	cout<<"Please input the filename: "<<endl;
	cin>>filename;
	cout<<"Inputed filename : "<<filename<<endl;
	myfile.open(filename.c_str(),ios_base::in);
	if(myfile.is_open())
	{
		while(getline(myfile,buffer)&&buffer.size()>0)
		{
			myfname=getfirstname(buffer);
			mylname=getlastname(buffer);
			cout<<myfname<<", "<<mylname<<endl;
			if(myfname!="-1"&&mylname!="-1")
			{
				person temp;
				temp.fname=myfname;
				temp.lname=mylname;
				myset.insert(temp);
			}
		}
	}
	myfile.clear();
	myfile.close();
	personSet::iterator it;
	for(it=myset.begin();it!=myset.end();it++)
	{
		cout<<(*it).fname<<" , "<<(*it).lname<<endl;

	}
}