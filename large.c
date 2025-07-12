#include <stdio.h>
void main()
{
    int data[5],sum=0;
    printf("Enter the 5 elements\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",data+i);
    }
    int max= *data;
    for(int i=0;i<5;i++)
    {
        if(data[i]>max)
        max=data[i];
    }
  printf("The largest element is %d",max);
}


