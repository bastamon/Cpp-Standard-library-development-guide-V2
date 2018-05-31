#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
 clrscr();
 double x1=20;
 double x2=12;
 double y=0.0;
 y=fmod(x1,x2);
 printf("x1=%6.3f, x2=%6.3f, fmod(x1,x2)=%6.3f \n",x1,x2,y);

 getchar();
}