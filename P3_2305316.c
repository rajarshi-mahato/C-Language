#include <stdio.h>
int main()
{
int CP_316,MP_316,D_316,SP_316,R_316;
printf("Enter the cost price");
scanf ("%d",&CP_316);
printf("Enter the market price");
scanf ("%d",&MP_316);
printf("Enter the discount");
scanf ("%d",&D_316);
SP_316=MP_316 - ((D_316*MP_316)/100) ;
R_316=SP_316>CP_316? (((SP_316-CP_316)*100)/CP_316) : (((CP_316-SP_316)*100)/CP_316);
(SP_316>CP_316)?printf("Profit of %d percentage",R_316):printf("Loss of %d percentage",R_316 );
return 0;
}



