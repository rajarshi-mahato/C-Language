#include <stdio.h>
void main()
{
int n;
printf("Enter a number to enter its factors");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if (n%i==0)
printf("%d ",i);
}
}
