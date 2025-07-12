#include <stdio.h>
int LARGEST(int a[],int n);
int SMALLEST(int a[],int n);
void main()
{
    int a[30],num;
    printf("Enter size of the array\n");
    scanf("%d",&num);
    printf("Enter the array\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Largest = %d\n",LARGEST(a,num));
    printf("Smallest = %d\n",SMALLEST(a,num));
}
int LARGEST(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int SMALLEST(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
