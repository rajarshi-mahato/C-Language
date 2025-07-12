#include <stdio.h>
void main()
{
int h1_316,h2_316,m1_316,m2_316,s1_316,s2_316,sec1_316,sec2_316,sum_316,hrs_316,mins_316,sec_316,rem_316;
printf("Enter first time in hh:mm:ss format");
scanf("%d %d %d",&h1_316,&m1_316,&s1_316);
printf("Enter second time in hh:mm:ss format");
scanf("%d %d %d",&h2_316,&m2_316,&s2_316);
sec1_316= h1_316*3600 + m1_316*60 + s1_316;
sec2_316= h2_316*3600 + m2_316*60 + s2_316;
sum_316 = sec2_316+sec1_316;
hrs_316=sum_316/3600;
rem_316=sum_316%3600;
mins_316=rem_316/60;
sec_316=rem_316%60;
printf("%d: %d: %d",hrs_316,mins_316,sec_316);
}




