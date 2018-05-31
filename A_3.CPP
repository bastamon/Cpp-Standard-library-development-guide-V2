#include "stdio.h"
#line 1 "A_1.c"
void main()
{

 printf("ling ID: %d, FILENAME= %s\n",__LINE__,__FILE__);
 #line 3 "Y3.cpp"
 printf("ling ID: %d, FILENAME= %s\n",__LINE__,__FILE__);
 #line  5
 printf("ling ID: %d, FILENAME= %s\n",__LINE__,__FILE__);
 getchar();
}