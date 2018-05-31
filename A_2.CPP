#include "stdio.h"
#line 20
main()
{
#define MAX 200
printf("MAX= %d\n", MAX);
#undef MAX
#define MAX 150
printf("MAX= %d\n",MAX);
getchar();
return 0;
}