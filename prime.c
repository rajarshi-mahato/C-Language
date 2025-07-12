#include <stdio.h>
void main()
{
int c,n;
c=0;
printf("Enter the number to check for prime number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if (n%i==0)
c++;
}
if (c==2)
printf(" %d is a Prime Number",n);
else
printf("%d is not a Prime Number",n);
}
