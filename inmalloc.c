#include <stdio.h>
#include<stdlib.h>
void main()
{
float *fp;
int i;
fp=(float *)malloc(10* sizeof(float));
if(fp==NULL)
{
    printf("\n out of memory\n");
    exit(0);
}
for(int i=0;i<10;i++)
printf("%f\n",fp[i]);
}
