#include <stdio.h>
void main()
{
int n,c;
printf("Enter your marks");
scanf("%d",&n);
c=n/10;
switch (c)
{
case 10:
 printf("Your Grade is O");
 break;
case 9:
 printf("Your Grade is O");
 break;
case 8:
 printf("Your Grade is E");
 break;
case 7:
 printf("Your Grade is A");
 break;
case 6:
 printf("Your Grade is B");
 break;
case 5:
 printf("Your Grade is C");
 break;
case 4:
 printf("Your Grade is D");
 break;
case 3:
 printf("Your Grade is F");
 break;
case 2:
 printf("Your Grade is F");
 break;
case 1:
 printf("Your Grade is F");
 default: printf("Invalid Input");
 }
 }
 
 
