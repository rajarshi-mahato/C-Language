#include <stdio.h>
int main()
{
int m_316,k_316,l;
printf("Enter distance  in meters\n");
scanf("%d",&m_316);
k_316=m_316/1000;
l=m_316 - (k_316*1000);
printf("The distance is %d km %d m",k_316,l);
return 0;
}

