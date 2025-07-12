#include <stdio.h>
int main()
{
 int a,b,*x,*y,sum;
 printf("\nEnter the two numbers to add");
 scanf("%d %d", &a,&b);
 x=&a;
 y=&b;
 sum=*x + *y;
 printf("\nSum offf %d and %d is %d",a,b,sum);
 return 0;
 }
