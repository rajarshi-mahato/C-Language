#include <stdio.h>
int ODD(int a[],int n);
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
    printf("ODD SUM is %d",ODD(a,num));
}
int ODD(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        sum+=a[i];
    }
    return sum;
}
