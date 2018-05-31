#include "stdio.h"
void fun_start()
{
   printf("fun_start has been done!\n");
}
void fun_end()
{
   printf("fun_end has been done!\n");
}
#pragma startup fun_start
#pragma exit  fun_end
void main()
{
  printf("The main program has been done!\n");
}


