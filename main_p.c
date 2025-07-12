#include <stdio.h>
void main()
{
int n,m2,d,m1,check,rev,c,d2,use;
printf("|----------------------------------------------------------------------------------|\n");
printf("|                        ENTER YOUR CHOICE IN NUMBERS                              |\n");
printf("|----------------------------------------------------------------------------------|\n");
printf("|                1.Print the words number entered.                                 |\n");
printf("|                2.Print the words number in reverse.                              |\n");
printf("|----------------------------------------------------------------------------------|\n");
scanf("%d",&n);
switch(n)
 {
  case 1:
  printf("Enter a number\n");
  scanf("%d",&m1);
  use=m1;
  rev=0;
   while (use!=0)
   {
    c=use%10;
    rev=rev*10 + c;
    use/=10;
   }
   while(rev!=0)
     {
     d2=rev%10;
      switch (d2)
       {
       case 0:
       printf("Zero ");
       break;
       case 1:
       printf("One ");
       break;
       case 2:
       printf("Two ");
       break;
       case 3:
       printf("Three ");
       break;
       case 4:
       printf("Four ");
       break;
       case 5:
       printf("Five ");
       break;
       case 6:
       printf("Six ");
       break;
       case 7:
       printf("Seven ");
       break;
       case 8:
       printf("Eight ");
       break;
       case 9:
       printf("Nine ");
       break;
       }
       rev=rev/10;
       }   
       while(m1!=0)
   {
    check=m1%10;
    if(check==0)
       printf("Zero ");
    m1/=10;
   }  
  break;
  case 2:
  printf("Enter a number\n");
  scanf("%d",&m2);
    while(m2!=0)
     {
     d=m2%10;
      switch (d)
       {
       case 0:
       printf("Zero ");
       break;
       case 1:
       printf("One ");
       break;
       case 2:
       printf("Two ");
       break;
       case 3:
       printf("Three ");
       break;
       case 4:
       printf("Four ");
       break;
       case 5:
       printf("Five ");
       break;
       case 6:
       printf("Six ");
       break;
       case 7:
       printf("Seven ");
       break;
       case 8:
       printf("Eight ");
       break;
       case 9:
       printf("Nine ");
       break;
       
       }
       m2=m2/10;
       }     
  break;
  default: printf("Invalid Input");
  }
  }
  
