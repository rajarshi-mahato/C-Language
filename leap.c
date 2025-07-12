#include <stdio.h>
void main()
{
int n;
printf("Enter a year");
scanf("%d",&n);
if(n%4==0 && n%100!=0 )
   printf("Leap Year");
else
   printf("It is not a leap year");
}

