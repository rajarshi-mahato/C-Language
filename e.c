#include <stdio.h>
void main()
{
int check,sum=0,c;
printf("Enter the number");
scanf("%d",&c);
for(int j=1;j<=c;j++)
{
for(int i=1;i<=j;i++)
    {
      if(j%i==0)
      sum=sum+i;
    }
if(sum==c)
printf("%d ",c);
sum=0;
}
}
