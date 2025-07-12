#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,*a,i,s=0;
    printf("\nenter no.of elements of the array:");
    scanf("%d",&N);
    a=(int *)malloc(N*sizeof(int));
    if(a==NULL)
    {
        printf("Memory allocation unsuccessful...");
        exit(0);
    }
    printf("\nenter the array elements one by one");
    for(i=0;i<N;i++)
    {
        scanf("%d",a+i);
        s+=a[i];
    }
    printf("\n sum is %d",s);
    return 0;
}
