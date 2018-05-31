#include "stdio.h"
#define NUM(a,b,c) a##b##c
#define STR(a,b,c) a##b##c
void main()
{
printf(" %d\n", NUM(1,2,3));

printf(" %s\n", STR("aa","bb","cc"));
getchar();

}