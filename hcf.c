#include <stdio.h>
void main()
{
int n,m,hcf;
printf("Enter the Lower and Upper Number");
scanf("%d %d",&n,&m);
for (int i=1;i<=m;i++)
{
if(n%i==0 && m%i==0)
hcf=i;
}
printf("%d",hcf);
}


