#include <stdio.h>
void SWAP(int a[],int n);
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
    SWAP(a,num);
}
void SWAP(int a[],int n)
{
    int temp;
    temp=a[n-1];
    a[n-1]=a[0];
    a[0]=temp;
    printf("The new array after swapping\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

