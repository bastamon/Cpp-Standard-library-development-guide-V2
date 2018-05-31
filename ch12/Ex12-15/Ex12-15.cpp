#include <iostream>
#include <locale>
#include <string>
using namespace std;
namespace My{
	using namespace std;
	typedef numpunct_byname<char> cnumpunct;
	class BooLNames: public cnumpunct{
	protected:
		string do_truename()  const{return "Oui Oui!";};
		string do_falsename()  const{return  "Mais  Non!";};
		~BooLNames(){};
	public:
		BooLNames(const char* name):cnumpunct(name){}
	};
}
int main(int argc, char**argv)
{
	locale  loc(locale("chinese"),new My::BooLNames(" "));
	cout.imbue(loc);
	cout<<boolalpha<<"today? "<<"Monday."<<endl;
	return 0;
}
 
