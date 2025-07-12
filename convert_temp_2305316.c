#include <stdio.h>
int main()
{
float centi,faren;
printf("Enter temperature in centigrade\n");
scanf("%f",&centi);
faren=centi*1.8 + 32;
printf("Temperature in farenheit is %f",faren);
}
