#include <stdio.h>
void main()
{
int a[30],r=0,num,n;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the Array\n");
for(int k=0;k<n;k++)
scanf("%d",&a[k]);
for(int i=0;i<n;i++)
{
 for(int j=0;j<n;j++)
  {
   if(a[i]==a[j] && i!=j)
    {
    num=a[j];
    r=1;
    }    
  }
    if(r==1)
    break;
}
printf("Array after removing duplicate elements\n");
for(int k=0;k<n;k++)
  {
     if(a[k]==num)
        continue;
     else
        printf("%d ",a[k]);
}
}

