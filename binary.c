#include <stdio.h>
void main()
{
int num,a[30],i=0;
printf("Enter the number");
scanf("%d",&num);
while(num>0)
{  
     a[i]=num%2;
     num/=2;
     i++;
}
for(int j=i-1;j>=0;j--)
printf("%d ",a[j]);
}

