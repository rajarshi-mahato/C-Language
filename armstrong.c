#include <stdio.h>
void main()
{
int n,check,sum,d;
sum=0;
printf("Enter a number to check for armstrong number");
scanf("%d",&n);
check=n;
while(n>0)
{
  d=n%10;
  sum+= (d*d*d);
  n=n/10;  
}
if(sum==check)
printf("Armstrong Number");
else
printf("Not an Armstrong Number");
}
