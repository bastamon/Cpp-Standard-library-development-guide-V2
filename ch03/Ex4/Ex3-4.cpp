#include <iostream>
#include <vector>
using namespace std;
struct ST{
int id;
double db;
};
void Origin(int num, vector<ST>& vt)
{
	int m=num;
	ST temp;
	for(int i=0;i<m;i++)
	{
		temp.id=i+1;
		temp.db=(i+1)*10;
	    vt.push_back(temp);
	}
}
void Iter_for(vector<ST>& vt)
{
	ST temp;
	vector<ST>::iterator iter;
	for(iter=vt.begin();iter!=vt.end();iter++)
	{
		temp=*iter;
		cout<<"id:  "<<temp.id<<",  db:  "<<temp.db<<endl;
	}
}
void at_for(vector<ST>& vt)
{
	ST temp;
	int i=0;
	int m=vt.size();
	for(i=0;i<m;i++)
	{
		temp=vt.at(i);
 		cout<<"id:  "<<temp.id<<",  db:  "<<temp.db<<endl;
	}
}
void main()
{
	ST tmp;
	 vector<ST> myvt;
	 Origin(5,myvt);
	 int size=myvt.size();
	 cout<<"size: "<<size<<endl;
	 cout<<"Iterator output!"<<endl;
	 Iter_for(myvt);
	 cout<<"at() output!"<<endl;
	 at_for(myvt);
	 cout<<"empty() usage:"<<endl;
	 while(!myvt.empty())
	 {
		 tmp=myvt.back();
		 cout<<"id "<<tmp.id<<", db: "<<tmp.db<<endl;
		 myvt.pop_back();
	 }
}