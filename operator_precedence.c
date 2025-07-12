#include <stdio.h>
void main()
{
int a,b,c,d,f;
printf("Enter values in the given format _>_+_&&_");
scanf("%d %d %d %d",&a,&b,&c,&d);
f=a>b+c&&d;
printf("The value of the given format is %d",f);
}

