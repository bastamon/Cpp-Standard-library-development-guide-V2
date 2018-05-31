#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
 clrscr();
 char* s1="12345678";
 char* s2="abcdefgh";
 char* s3=NULL;
 s3=(char*)memcpy(s1,s2,5);
 printf("s1=%s, s2=%s, s3=memcpy(s1,s2,5)= %s  \n",s1,s2,s3);
 s1="12345678";
 s2="abcdefgh";
 s3=NULL;
 s3=(char*)memmove(s1,s2,6);
 printf("s1=%s, s2=%s, s3=memmove(s1,s2,6)= %s  \n",s1,s2,s3);

 s1="12345678";
 s2="abcdefgh";
 s3=strcpy(s1,s2);
 printf("s1=%s, s2=%s, s3=strcpy(s1,s2)= %s  \n",s1,s2,s3);

 char sC1[]="12345678";
 char sC2[]="abcdefgh";
 s3=strncpy(sC1,sC2,2);
 printf("s1=%s, s2=%s, s3=strncpy(s1,s2,2)= %s  \n",s1,s2,s3);

 getchar();
}
