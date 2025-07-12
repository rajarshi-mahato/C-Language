#include <stdio.h>
void main()
{
int a[30],b[30],n;
printf("Input the  size  of array");
scanf("%d",&n);
for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
for(int j=0;j<n;j++)
   b[j]=a[n-j-1];
for(int k=0;k<n;k++)
   printf("%d ",b[k]);
}

