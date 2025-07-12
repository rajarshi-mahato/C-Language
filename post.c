#include <stdio.h>
void main()
{
int c=1,a[30],r=0,num,n,b[30];
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
    b[c]=j+1;
    c++;
    num=a[j];
    r=1;
    }    
  }
    if(r==1)
    break;
}
printf("The positions in which %d is present are ",num);
for(int l=0;l<n;l++)
{
 if (num==a[l])
  {
    b[0]=l+1;
    break;
  }
}
for(int k=0;k<c;k++)
printf("%d ",b[k]);
}

    

