#include <stdio.h>
void main()
{
int n,d,f,m;
d=1;
printf("Enter a range");
scanf("%d %d",&n,&m);
while (f<m)
{
f=d*7;
if( f>n && f<m)
printf("%d ",f);
d++;
}
}


