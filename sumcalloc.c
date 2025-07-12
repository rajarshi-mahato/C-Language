#include <stdio.h>
#include<stdlib.h>
void main()
{
int *a;
int n,s=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
a=(int *)calloc(n, sizeof(int));
printf("Enter the elements\n");
for(int i=0;i<n;i++)
{
   scanf("%d\n",&a[i]);
   s+=a[i];
}
printf("The sum of the elementsis %d\n",s);
}
