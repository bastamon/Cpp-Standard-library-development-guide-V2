#include <iostream>
#include <map>
#include <utility>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
typedef pair<int, float> mypair;
void out(mypair& p)
{
	cout<<"Index: "<<right<<p.first<<" ,";
	cout<<std::fixed<<setprecision(2)<<setw(8)<<right<<p.second<<" ;"<<endl;
}
void print(map<int,float>& m)
{
	map<int,float>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		mypair p=(mypair)(*it);
		out(p);
	}
}
void printV(vector<mypair>& v)
{
	vector<mypair>::iterator it;
	for(it=v.begin();it!=v.end();it++)
	{
		mypair p=(mypair)(*it);
		out(p);
	}
}
void In_Original(string filename,map<int,float>& m)
{
	if(filename.empty())
	{
		cout<<"filename is error, please input again."<<endl;
		exit(0);
	}
	m.clear();
	ifstream ifn;
	ifn.open(filename.c_str(),ios_base::in);
	if(ifn.fail())
	{
		cout<<"file can't be opened."<<endl;
		exit(0);
	}
	else
	{
		while(!ifn.eof())
		{
			//mypair temp_pair;
			char temp[128];
			ifn.getline(temp,127);
			int id;	float  val;
			sscanf(temp,"%d,%f",&id,&val);
			//temp_pair.first=id;
			//temp_pair.second=val;
			//m.insert(temp_pair);
			m.insert(make_pair(id,val));
		}
	}
}
bool mysort(mypair &m, mypair &n)
{	
    return m.second < n.second;
}
bool mysortGreater(mypair &m, mypair &n)
{
	return m.second > n.second;
}
void main()
{
	map<int, float> m,m1;
	m.clear();
	m1.clear();
	map<int,float>::iterator it;
	vector<mypair> v;
	vector<mypair>::iterator itV;
	In_Original("data.txt",m);
	print(m);
	for(it=m.begin();it!=m.end();it++)
	{
		mypair temp=(mypair)(*it);
		v.push_back(make_pair(temp.first,(float)temp.second));
	}
	cout<<"Output vector: "<<endl;
	printV(v);
	sort(v.begin(),v.end(),mysort);  // mysort);

	cout<<"Output vector sorted by less."<<endl;
	printV(v);
	//暂存在vector中
	sort(v.begin(),v.end(),mysortGreater); 
	cout<<"Output vector sorted by greater."<<endl;
	printV(v);
	//暂存在vector中
}