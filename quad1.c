#include <math.h>
#include <stdio.h>
void main()
{
float a,b,c,d;
float r1,r2;
printf("Enter values in A(x^2) + Bx + C=0 format\n");
scanf("%f %f %f",&a,&b,&c);
d=b*b - 4*a*c;
if (b*b==4*a*c)
    {
     printf("Roots are real and equal\n");
     r1=(-b + sqrt(d))/2*a;
     printf("The root is %f",r1);
    }
else if (b*b>4*a*c)
    {
     printf("Roots are real and distinct\n");
     r1=(-b + sqrt(d))/2*a;
     r2=(-b - sqrt(d))/2*a;
     printf("Roots are %f and %f",r1,r2);
    }
else if (b*b<4*a*c)
    {
     printf("Roots are complex\n");
     r1=(-b/2*a);
     r2=(sqrt(4*a*c - b*b))/2*a;
     printf("Root 1 = %f + i%f\n",r1,r2);
     printf("Root 2 = %f - i%f",r1,r2);
    }
}

