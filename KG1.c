#include <stdio.h>
void main()
{
int n;
printf("Enter your Marks");
scanf("%d",&n);
if(n>=90 && n<=100)
printf("Your Grade is O");
else if(n>=80 && n<=89)
printf("Your Grade is E");
else if(n>=70 && n<=79)
printf("Your Grade is A");
else if(n>=60 && n<=69)
printf("Your Grade is B");
else if(n>=50 && n<=59)
printf("Your Grade is C");
else if(n>=40 && n<=49)
printf("Your Grade is D");
else if(n>=0 && n<=39)
printf("Your Grade is F");
else
printf("Invalid Input");
}
