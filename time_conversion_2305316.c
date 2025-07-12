#include <stdio.h>
int main()
{
int sec_316,hrs_316,mins,rem1;
printf("Enter time in seconds\n");
scanf("%d",&sec_316);
hrs_316 = sec_316/3600;
rem1=sec_316%3600;
mins = rem1/60;
sec_316=rem1%60;
printf("%d hrs %d mins %d secs\n",hrs_316,mins,sec_316);
return 0;
}


