#include <stdio.h>
void swap(int *,int *);
int main()
{
int x=5,y=10;
printf("%d %d\n",x,y);
swap(&x,&y);
printf("%d %d\n",x,y);
return 0;
}
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}

