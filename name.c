#include<stdio.h>
void main()
{
char str[50];
printf("Enter a string : ");
scanf("%[^\n]s",str);
printf("You entered: %s",str);
}
