#include <stdio.h>
int main()
{
int n1_316, n2_316, n3, n4, n5;
printf("Enter a 3 digit number");
scanf("%d",&n1_316);
n2_316=n1_316/100;
n3=n1_316%10;
n4=(n1_316/10)%10;
n5=n3*100 + n4*10 + n2_316;
printf("The reversed number is %d",n5);
return 0;
}
