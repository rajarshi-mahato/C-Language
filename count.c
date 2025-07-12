#include <stdio.h>
void main()
{
int n,a[30],b[30],count=0,check,r=0;
printf("Enter size of the array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
for(int j=0;j<n;j++)
  {
     for(int k=0;k<n;k++)
     {
          if(a[j]==a[k] && j!=k)
          {
           count++;
           check=a[k];
           r=1;
          }
     }
       if (r==1)
        break;     
   }
printf("%d is present %d times",check,count+1); 
}  
  
  
     


