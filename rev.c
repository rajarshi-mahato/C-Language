#include <stdio.h>
void main()
{
    int data[5],sum=0;
    printf("Enter the 5 elements\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",data+i);
    }

printf("The reverse of the array is \n");
for(int i=4;i>=0;i--)
 printf(" %d ",*(data +i));
}
