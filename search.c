#include <stdio.h>
void main()
{
int n,a[30],b[30],new,pos;
printf("Enter size of the array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("Enter the number to be searched in the array\n");
scanf("%d",&n);
for(int j=0;j<n;j++)
{
if(a[j]==n)
  {
  pos=j+1;
  printf("Number found at position %d\n",pos);
  pos=0;
  }
  
}
}


