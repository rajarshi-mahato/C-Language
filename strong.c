#include <stdio.h>
void main()
{
int n,sum,c,d,check;
c=1;
sum=0;
printf("Enter a number to check for strong number");
scanf("%d",&n);
check=n;
while(n>0)
{
d=n%10;
for(int i=1;i<=d;i++)
c=c*i;
sum=sum+c;
c=1;
n=n/10;
}
if (sum==check)
printf("Strong Number");
else
printf("Not a Strong Number");
}

