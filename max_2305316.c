#include <stdio.h>
int main()
{
int max,num1,num2;
printf("Enter two numbers\n");
scanf("%d \n %d",&num1,&num2);
max=num1>num2?num1:num2;
printf("The maximum of the two numbers is %d\n",max);
}
