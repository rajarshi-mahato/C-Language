#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter the 3 numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if (a==b && a==c)
printf("All 3 numbers are equal");
else if (a==c || a==b || b==c )
  printf("Invalid Input");
else if (a>b)
{
  if(a>c)
  printf("%d is the greatest ",a);
  else 
  printf("%d is the greatest ",c);
}
else
{
  if (b>c)
  printf("%d is the greatest ",b);
  else
  printf("%d is the greatest",c);
}
}

  
