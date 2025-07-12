#include <stdio.h>
float area(int r);
float peri(int r);
void main()
{
int n;
printf("The Radius\n");
scanf("%d",&n);
printf("The area of circle is %f\n",area(n));
printf("The perimeter of circle is %f\n",peri(n));
}
float area(int r)
{
 int *p;
 p=&r;
 return ((22/7)*(*p)*(*p));
}
float peri(int r)
{
 int *p;
 p=&r;
 return (2*(22/7)*(*p));
}
