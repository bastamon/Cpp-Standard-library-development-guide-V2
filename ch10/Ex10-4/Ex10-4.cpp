#include <iostream>
#include <typeinfo>
using namespace std;
class Circle {
	public:
		virtual void myfunc() const {}
	};
class Ellipse: public Circle {
	public:
	virtual void myEllipse() const 
	 {
	};
};

void main()
{
//typeid
	int ti_obj=20;
	string tstr="I am male.";
	double td=32.56;
	float tfl=21.075;
	const type_info& ti=typeid(ti_obj);
	const type_info& tif=typeid(tstr);
	const type_info& tid=typeid(td);
	const type_info& tifl=typeid(tfl);
	cout<<ti.name()<<" ;"<<ti.raw_name()<<endl;
	cout<<tif.name()<<endl;
	cout<<tid.name()<<endl;
	cout<<tifl.name()<<endl;
//dynamic_cast   bad_cast
   Circle instance;
   Circle& ref_shape = instance;
   try {
      Ellipse& ref_circle = dynamic_cast<Ellipse&>(ref_shape); 
   }
   catch (bad_cast) {
      cout << "Caught: bad_cast exception. A Shape is a Circle.\n"; 
   }
//bad_typeid	
   Circle* p=NULL;
   try{
	   cout<<typeid(*p).name()<<endl;
   }
   catch(bad_typeid)
   {
	   cout<<"Object is NULL."<<endl;
   }
   cout<<"//..."<<endl;
   Circle* pp=new Circle();
   try{
	   cout<<typeid(*pp).name()<<endl;
   }
   catch(bad_typeid)
   {
	   cout<<"Object is NULL."<<endl;
   }
//
}