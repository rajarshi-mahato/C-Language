#include <stdio.h>
void main()
{
int n1_316,n2_316,n3_316,n4_316,n5_316;
printf("Enter a three digit number");
scanf("%d",&n1_316);
n2_316= n1_316%10;
n3_316=n1_316/100;
n4_316=(n1_316/10)%10;
n5_316=n2_316+n3_316+n4_316;
printf("The sum of the numbers is %d",n5_316);
}
