 #include <stdio.h>
 void main()
 {
 int b[30][30],order;
   printf("Enter the order of the matrix\n");
   scanf("%d",&order); 
    printf("Enter the array\n");
    for(int i=0;i<order;i++)
    for(int j=0;j<order;j++)
       scanf("%d",&b[i][j]);
    printf("Original array\n");
    for(int i=0;i<order;i++)
    {
      for(int j=0;j<order;j++)
      {
       printf("%d ",b[i][j]);
      }
      printf("\n");
    }
 int p[30][30],control=order;
   for(int i=0;i<order;i++)
   {
    for(int j=0;j<order;j++)
    {
        p[i][j]=b[j][control-1];   
    }
    control--;
    
   }
   printf("The New Matrix is\n");
   for(int i=0;i<order;i++)
   {
    for(int j=0;j<order;j++)
    {
        printf("%d ",p[i][j]);
    }
    printf("\n");
   }
 }
