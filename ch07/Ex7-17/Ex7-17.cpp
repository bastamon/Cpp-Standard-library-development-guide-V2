#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;
const string filename="planets.dat";
inline void eatline(){while(std::cin.get()!='\n')continue;}
struct planet
{
	char name[20];
	double population;
	double g;	
};

void main()
{
	planet pl;
	cout<<fixed<<right;
	ifstream fin;
	fin.open(filename.c_str(),ios_base::in|ios_base::binary);
	if(fin.is_open())
	{
		cout<<"Here are the current contents of the "<<filename<<"file: \n";
		while(fin.read((char*)&pl,sizeof(pl)))
		{
			cout<<setw(20)<<pl.name<<":"<<setprecision(0)<<setw(12)<<pl.population<<setprecision(2)
				<<setw(6)<<pl.g<<endl;
		}
		fin.clear();
		fin.close();
	}
	ofstream fout(filename.c_str(),ios_base::out|ios_base::app|ios_base::binary);
	if(!fout.is_open())
	{
		cerr<<"Can't open"<<filename<<" file for output: \n";
		exit(EXIT_FAILURE);
	}
	cout<<"Enter planet name (enter a blank line to quit):\n";
	cin.get(pl.name,20);
	while(pl.name[0]!='\0')
	{
		eatline();
		cout<<"Enter planetary population: ";
		cin>>pl.population;
		cout<<"Enter planet's acceleration of gravity: ";
		cin>>pl.g;
		eatline();
		fout.write((char*)&pl,sizeof(pl));
		cout<<"Enter planet name (enter a blank line to quit): \n";
		cin.get(pl.name,20);
	}
	fout.close();
	fin.clear();
	fin.open(filename.c_str(),ios_base::in|ios_base::binary);
	if(fin.is_open())
	{
		cout<<"Here are the new contents of the "<<filename<<"\n";
		while(fin.read((char*)&pl,sizeof(pl)))
		{
			cout<<setw(20)<<pl.name<<": "<<setprecision(0)<<setw(12)<<pl.population<<setprecision(2)<<setw(6)<<pl.g<<endl;
		}
		fin.close();
	}
	cout<<"Done. \n";
	return;
}