#include <stdio.h>
void main()
{
int n,m;
printf("Enter the Lower and Upper Limit");
scanf("%d %d",&n,&m);
for (int i=m;i>=n;i--)
{
  if (i%2==0)
  printf("%d ",i);
}
}
