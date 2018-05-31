#include <iostream>
#include <assert.h>
#include <string>
using namespace std;
void ana_string(char* str)
{
   assert(str!=NULL);
   assert(str!="\0");
   assert(strlen(str)>2);
}
void main()
{
	char test1[]="abc";
	char *test2=NULL;
	char test3[]="";
	printf("string: %s. \n",test1);
	fflush(stdout);
	ana_string(test1);
	//
	printf("string: %s \n",test2);
	fflush(stdout);
	ana_string(test2);
	//
	printf("string: %s \n",test3);
	fflush(stdout);
	ana_string(test3);
	//
}
