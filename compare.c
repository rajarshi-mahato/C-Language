#include <stdio.h>
#include <string.h>
void main()
{
char str1[50];
char str2[50];
int ret;

strcpy(str1,"abcdef");
strcpy(str2,"ABCDEF"); 

ret=strcmp(str1,str2);
if(ret<0)
{
   printf("str1 is less than str2\n");
}
else if(ret>0)
{
 printf("str2  is less than str1\n");
}
else
{
printf("str1 is equal to str2");
}
}
