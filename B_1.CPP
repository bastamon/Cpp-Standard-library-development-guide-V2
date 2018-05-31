#include <stdio.h>
#include <math.h>
void main()
{
 double x1,x2,x3,x4;
 double pi=3.1415926;
 double y=0;
 x1=45;
 y=cos(x1/180*pi);
 printf("x= %6.2f, cos(x)=%7.3f \n",x1,y);
 y=sin(x1/180*pi);
 printf("x= %6.2f, sin(x)=%7.3f \n",x1,y);
 y=tan(x1/180*pi);
 printf("x= %6.2f, tan(x)=%7.3f \n",x1,y);
 x2=1.0;
 y=acos(x2)/pi*180;
 printf("x= %6.2f, acos(x)=%7.3f \n",x2,y);
 y=asin(x2)/pi*180;
 printf("x= %6.2f, asin(x)=%7.3f \n",x2,y);
 y=atan(x2)/pi*180;
 printf("x= %6.2f, atan(x)=%7.3f \n",x2,y);
 y=atan2(x2,1)/pi*180;
 printf("x=%6.2f, atan(x,1)=%7.3f \n",x2,y);
 x3=5.0;
 y=cosh(x3);
 printf("x= %6.2f,cosh(x)=%7.3f \n",x3,y);
 y=sinh(x3);
 printf("x= %6.2f,sinh(x)=%7.3f \n",x3,y);
 y=tanh(x3);
 printf("x= %6.2f,tanh(x)=%7.3f \n",x3,y);

 getchar();
}