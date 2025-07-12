#include <stdio.h>
int PRIMESUM(int a[],int n);
void main()
{
    int a[30],num;
    printf("Enter size of the array\n");
    scanf("%d",&num);
    printf("Enter the array\n");
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);
    printf("Sum of Prime Numbers is %d",PRIMESUM(a,num));
}
int PRIMESUM(int a[],int n)
{
    int sum=0,c;
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
              c=c+1;
        }
          if(c==2)       
        sum+=a[i];
    }
       return sum;
}

