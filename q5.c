#include <stdio.h>
void main()
{
int a[30],b[30],n,sum=0;
printf("Input the  size  of array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 sum+=a[i];
 }
printf("Sum = %d\n",sum);
printf("Average = %d\n",sum/n);
}



