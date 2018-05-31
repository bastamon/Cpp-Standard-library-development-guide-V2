#include <iostream>
#include <exception>
using namespace std;
void main()
{
	logic_error a("Exception: logic_error.");
	runtime_error b("Exception: runtime_error.");
	domain_error c("Exception: domain_error.");
	invalid_argument d("Exception: invalid_argument.");
	length_error e("Exception: length_error.");
	range_error f("Exception: range_error.");
	overflow_error g("Exception: overflow_error.");
	underflow_error h("Exception: underflow_error.");
	out_of_range i("Exception: out_of_range.");
	int switch_K;
	cout<<"1. Exception: logic_error."<<endl;
	cout<<"2. Exception: runtime_error."<<endl;
	cout<<"3. Exception: domain_error."<<endl;
	cout<<"4. Exception: invalid_argument.."<<endl;
	cout<<"5. Exception: length_error."<<endl;
	cout<<"6. Exception: range_error."<<endl;
	cout<<"7. Exception: overflow_error."<<endl;
	cout<<"8. Exception: underflow_error."<<endl;
	cout<<"9. Exception: Out_of_Range."<<endl;
	cout<<"0. Exit."<<endl;
loop: 	cout<<".....Please Input 1-9: ....."<<endl;
	try{
		cin>>switch_K;
		if(switch_K==0)
		{
			goto loop2;
		}
		switch(switch_K)
		{
		case 1:
			throw a;
			break;
		case 2:
			throw b;
			break;
		case 3:
			throw c;
			break;
		case 4:
			throw d;
			break;
		case 5:
			throw e;
			break;
		case 6:
			throw f;
			break;
		case 7:
			throw g;
			break;
		case 8:
			throw h;
			break;
		case 9:
			throw i;
			break;
		}

	}
	catch(logic_error& e )
	{
		cout<<e.what()<<endl;
	}
	catch(runtime_error& e)
	{
		cout<<e.what()<<endl;
	}
	catch(domain_error& e)
	{
		cout<<e.what()<<endl;
	}
	catch(invalid_argument& e)
	{
		cout<<e.what()<<endl;
	}
	catch(length_error& e)
	{
		cout<<e.what()<<endl;
	}
	catch(range_error& e)
	{
		cout<<e.what()<<endl;
	}
	catch(overflow_error& e)
	{
		cout<<e.what()<<endl;
	}
	catch(underflow_error& e)
	{
		cout<<e.what()<<endl;
	}
	catch(out_of_range& e)
	{
		cout<<e.what()<<endl;
	}
	goto loop;
loop2: return;
}
