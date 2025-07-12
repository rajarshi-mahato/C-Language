#include <stdio.h>
void main()
{
int n,m;
printf("Enter the Lower and Upper Range");
scanf("%d %d",&n,&m);
while(n<=m)
{
if(n%2!=0)
printf("%d ",n);
n++;
}
}

