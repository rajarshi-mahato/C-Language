#include <stdio.h>
void main()
{
int n,r,s;
s=0;
printf("Enter the number\n");
scanf("%d",&n);
for(;n>0;n/=10)
{
  r=n%10;
  s=s+r;
}
printf("Sum of the digits is %d",s);
}
  
