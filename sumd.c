#include <stdio.h>
void main()
{
int s,n;
s=0;
printf("Enter a number to print it's sum");
scanf("%d",&n);
while(n>0)
{
 s=n%10 + s;
 n/=10;
}
printf("The sum is %d",s);
}
 
