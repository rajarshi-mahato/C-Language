#include <stdio.h>
void main()
{
int a=10;
LOOP:do
{
  if (a==15)
   {
   a++;
   goto LOOP;
}
printf("value  of a: %d\n",a);
a++;
}
while(a<20);
}

