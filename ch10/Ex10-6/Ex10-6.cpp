#include <iostream>
#include <cstdarg>
#include <csetjmp>
#include <ctime>
#include <csignal>
#include <cstdlib>
#include <string>
using namespace std;
//va_list    char*
const int N=5;
void va_test(int i1,...)
{
	va_list ptr;
	va_start(ptr,i1);
	cout<<i1<<" ;";
	int n_i=N;
	//逐一取出元素
	while(n_i--)
	{
		cout<<va_arg(ptr,int)<<" ;";//依次取出一个整数
	}
	cout<<endl;
	va_end(ptr);
	
}
void jmp_test()
{
	int num=-1;
	jmp_buf  env;
	int state=setjmp(env);//只有第一次调用setjmp时,才返回0
	if(state==0)
	{
		cout<<"输入数字:";
		cin>>num;
		if(num!=0)
		{
			longjmp(env,1);//下一次调用setjmp时，setjmp的返回值为1
		}
	}
	else
	{
		cout<<"Error. "<<endl;
	}
}
void mysleep(int sec_wait)
{
	clock_t goal;
	long int wait=sec_wait*CLOCKS_PER_SEC;
	goal=wait+clock();
	while(goal>clock())
	{	
	};
	cout<<"Testing wait "<<sec_wait<<" second. "<<endl;
}
void time_test()
{
	clock_t ct;
	ct=clock();
}
void S_Handler(int signal)
{
    printf("Signal dealing...\n");
}
void test_Signal()
{
	typedef void (*SignalHandlerPointer)(int);
    SignalHandlerPointer previousHandler;
    previousHandler = signal(SIGABRT, S_Handler); 
    raise(SIGABRT);
}
void test_getenv()
{
	cout<<"Lib information: "<<endl;
   char *libvar;
   libvar = getenv( "LIB" ); // C4996
   if( libvar != NULL )
      //printf( "Original LIB variable is: %s\n", libvar );	
	  cout<<libvar<<endl;
   char* oldlib;
   _putenv("LIB=c:\\;d:\\");
   oldlib=getenv("LIB");
   cout<<oldlib<<endl;
   string s1="LIB=";
   string s2=string(libvar);
   string s3=s1+s2;
   ////s1=s1+s2;
   _putenv(s3.data());
   oldlib=getenv("LIB");
   cout<<oldlib<<endl;
}
void test_system()
{
	cout<<endl;
	cout<<"system dir e:\\ "<<endl;
	system("dir e:\\");
}
void main()
{
	va_test(12,34,56,31,76,98);
	jmp_test();
	mysleep(5);
	try{
	test_Signal();
	}
	catch(...)
	{
		cout<<"signal test."<<endl;
	}
	test_getenv();
	test_system();
}