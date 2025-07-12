#include <stdio.h>
void main()
{
int a,b,c,max;
printf("Enter the first number");
scanf("%d",&a);
printf("Enter the second number");
scanf("%d",&b);
printf("Enter the third number");
scanf("%d",&c);
max=a;
if(b>max)
max=b;
if (c>max)
max=c;
printf("Maximum of the 3 numbers is %d",max);
}



