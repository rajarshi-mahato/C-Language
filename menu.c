#include <stdio.h>
void main()
{
char c;
int a,b,d;
float k,m,n;
printf("\n1.ADD       Enter A\n");
printf("2.SUBTRACT  Enter S\n");
printf("3.MULTIPLY  Enter M\n");
printf("4.DIVISION  Enter D\n");
scanf("%c",&c);
switch (c)
{
  case 'A':
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    d=a+b;
    printf("The sum of %d and %d is %d",a,b,d);
    break;
  case 'a':
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    d=a+b;
    printf("The sum of %d and %d is %d",a,b,d);
    break;
  case 'S':
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    d=a>b?a-b:b-a;
    printf("The difference of %d and %d is %d",a,b,d);
    break;
  case 's':
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    d=a>b?a-b:b-a;
    printf("The difference of %d and %d is %d",a,b,d);
    break;
  case 'M':
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    d=a*b;
    printf("The multiplication of %d and %d is %d",a,b,d);
    break;
  case 'm':
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    d=a*b;
    printf("The multiplication of %d and %d is %d",a,b,d);
    break;
  case 'D':
    printf("Enter two numbers");
    scanf("%f %f",&n,&m);
    if(m==0)
      printf("Invalid Input");
    else
    {
      k=n/m;
      printf("The division of %f and %f is %f",n,m,k);
    }
    break;
  case 'd':
    printf("Enter two numbers");
    scanf("%f %f",&n,&m);
    if(m==0)
     printf("Invalid Input");
    else
    {
     k=n/m;
     printf("The division of %f and %f is %f",n,m,k);
    }  
    break;
    default : printf("Invalid Input");
}
}

