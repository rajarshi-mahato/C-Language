#include <stdio.h>
void main()
{
int a[30],b[30],n,sum=0,max=a[0];
printf("Input the  size  of array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
for(int j=0;j<n;j++)
{
if(max<a[j])
max=a[j];
}
printf("The maximum of array is %d",max);
}
 
