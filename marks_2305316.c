#include <stdio.h>
int main()
{
int n1,n2,n3,n4,n5,avg;
printf("Enter the marks of first student out of 200\n");
scanf("%d",&n1);
printf("Enter the marks of second student out of 200\n");
scanf("%d",&n2);
printf("Enter the marks of third student out of 200\n");
scanf("%d",&n3);
printf("Enter the marks of fourth student out of 200\n");
scanf("%d",&n4);
printf("Enter the marks of fifth student out of 200\n");
scanf("%d",&n5);
avg=(n1+n2+n3+n4+n5)/5;
printf("The average of the five students is %d",avg);
return 0;
}


