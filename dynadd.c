#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *x, *y , sum;
  x=(int*)malloc(sizeof(int));
  y=(int*)malloc(sizeof(int));
  printf("\n Enter two integer to add:");
  scanf("%d %d",x,y);
  sum=*x + *y;
  printf("Sum of %d and %d is %d",*x,*y,sum);
}

