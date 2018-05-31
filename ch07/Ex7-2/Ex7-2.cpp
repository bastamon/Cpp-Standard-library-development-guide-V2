#include <iostream>
#include <fstream>
using namespace std;
void main( void ) 
{
   using namespace std;
   bool b = cout.bad( );
   cout << b << endl;
   b = cout.good( );
   cout << b << endl;
//
   fstream fs;
   int n=1;
   fs.open(".\\eof.txt");
   cout<<fs.eof()<<endl;
   fs>>n;
   cout<<fs.eof()<<endl;
   fs.close();
//
   b = cout.fail( );
   cout << b << endl;
//
   fstream fx;
   fx.open(".\\test.txt",ios::out);
   fx.clear();   //清除所有标志位
   cout<<"badbit: "<<(fx.rdstate()&ios::badbit)<<" failbit: "<<(fx.rdstate()&ios::failbit)<<" eofbit: "<<(fx.rdstate()&ios::eofbit)<<" badbit: "<<(fx.rdstate()&ios::badbit)<<endl;
   fx.clear( ios::badbit | ios::failbit | ios::eofbit );
   cout<<"badbit: "<<(fx.rdstate()&ios::badbit)<<" failbit: "<<(fx.rdstate()&ios::failbit)<<" eofbit: "<<(fx.rdstate()&ios::eofbit)<<" badbit: "<<(fx.rdstate()&ios::badbit)<<endl;
   fx.close();
 
}
