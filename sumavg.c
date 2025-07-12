#include <stdio.h>
void main()
{
    int data[5],sum=0;
    printf("Enter the marks of 5 subjects\n");
    for(int i=0;i<5;i++)
    {
     scanf("%d",data+i);
     sum+= *(data+i);
    }
    printf("The sum is %d\n ",sum);
    printf("The average is %d ",(sum/5));
    
}
