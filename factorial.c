#include <stdio.h>
void main()
{
int n;
int c=1;
printf("Enter a number to get its factorial");
scanf("%d",&n);
for(int i=1;i<=n;i++)
  c=c*i;
printf("The factorial of %d is %d",n,c);
}
