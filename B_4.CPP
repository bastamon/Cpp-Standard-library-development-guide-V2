#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
 clrscr();
 double x1=1.6;
 double x2=1.4;
 double y1=0;
 double y2=0;
 y1=ceil(x1);
 y2=floor(x1);
 printf("x1= %5.3f, ceil(x1)=%5.3f, floor(x1)=%5.3f \n", x1,y1,y2);
 y1=ceil(x2);
 y2=floor(x2);
 printf("x2= %5.3f, ceil(x1)=%5.3f, floor(x1)=%5.3f \n", x2,y1,y2);
 getchar();
}