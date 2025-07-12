#include <stdio.h>
void main()
{
int m1,use,rev,check,d2,c;
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
  }
  
  
  
  
  
  
  
  



