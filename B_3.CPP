#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
  clrscr();
  double x1=20.0;
  double x2=-64.0;
  double y=0.0;
  y=hypot(x1,x2);
  printf("x=%6.3f, x2=%6.3f, hypot(x1,x2)= %7.3f \n",x1,x2,y);
  x1=2;
  x2=3;
  y=pow(x1,x2);
  printf("x=%6.3f, y=%6.3f, pow(x,y)=%7.3f \n",x1,x2,y);
  x1=16.0;
  y=sqrt(x1);
  printf("x=%6.3f, y=%7.3f\n", x1, y);
  getchar();

}
