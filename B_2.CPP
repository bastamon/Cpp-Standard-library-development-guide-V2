#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
  clrscr();
  double x3=7.389;
  double x4=100;
  double x5=74.589;
  double y=0;
  double* iptr=NULL;
  y=log(x3);
  printf("x= %6.2f, log(x)= %7.3f \n",x3,y);
  y=log10(x4);
  printf("x= %6.2f, log(x)= %7.3f \n",x4,y);
  y=modf(x5,iptr);
  printf("x= %6.2f, fraction= %7.3f, integral= %7.3f \n",x5,y,(*iptr));
  getchar();

}