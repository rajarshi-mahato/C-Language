#include <stdio.h>
void main()
{
int a[100],n,check=a[0];
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
for(int j=0;j<=n+1;j++)
{
  for(int k=0;k<n-1;k++)
    {
      if(a[k]<a[k+1])
        {           
           check=a[k+1];
           a[k+1]=a[k];
           a[k]=check;
        }
    }
}
printf("The second smallest number is %d\n" ,a[n-2]);
printf("The smallest number is %d " ,a[n-1]);
}
