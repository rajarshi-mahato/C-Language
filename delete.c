#include <stdio.h>
void main()
{
int n,a[30],b[30],new,pos;
printf("Enter size of the array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("Enter the position of the number to be deleted\n");
scanf("%d",&pos);
for(int j=0;j<n+1;j++)
{ 
   if (j<pos-1)
    b[j]=a[j];
   else if (j>=pos-1)
    b[j]=a[j+1];
}
printf("The new array is \n");
for(int k=0;k<n-1;k++)
   printf("%d ",b[k]);
}



