#include <stdio.h>
void main()
{
char c;
printf("Enter an alphabet in Lowercase");
scanf("%c",&c);
if (c>='a' && c<='z')
{
c=c-32;
printf ("Entered alphabet in Uppercase is %c",c);
}
else  
printf ("Invalid input");
}
