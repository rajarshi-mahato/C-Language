#include <stdio.h>
int main()
{
int num1,num2,swap;
printf("Enter the two numbers\n");
scanf("%d \n %d",&num1,&num2);
swap=num1;
num1=num2;
num2=swap;
printf("Swapped numbers are %d and %d",num2,num1);
return 0;
}

