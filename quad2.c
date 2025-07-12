#include <stdio.h>
#include <math.h>
void main()
{
double a,b,c,d,r1,r2;
int h;
printf("Enter value in Ax^2 + Bx + C=0 format\n");
scanf("%lf %lf %lf",&a,&b,&c);
if (b*b > 4*a*c)
 h=1;
else if (b*b < 4*a*c)
 h=2;
else 
 h=3;
switch(h)
{
   case 1:
   r1=((-b + sqrt(b*b - 4*a*c))/2*a);
   r2=((-b - sqrt(b*b - 4*a*c))/2*a);
   printf("The roots are real and distinct\nThe roots are %lf and %lf",r1,r2);
   break;
   case 2:
   r1= (-b)/2*a;
   r2= (sqrt(4*a*c-b*b)/2*a);
   printf("The roots are complex\n");  
   printf("The roots are %lf + i%lf",r1,r2);
   printf("The roots are %lf + i%lf",r1,r2);
   break;
   case 3:
   r1=(-b)/2*a;
   printf("Root is real and equal");
   printf("Root is %lf",r1);
   break;
   default:
   printf("Invalid Input");
}
}


