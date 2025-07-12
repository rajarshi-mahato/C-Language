#include <stdio.h>
void  main()
{
int n1_316,n2_316;
printf("Enter a six digit number");
scanf("%d",&n1_316);
n2_316=(n1_316/100000)+(n1_316%10);
printf("The sum is %d",n2_316);
}
