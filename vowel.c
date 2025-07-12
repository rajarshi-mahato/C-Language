#include <stdio.h>
void main()
{
char c;
printf("Enter an alphabet");
scanf("%c",&c);
if (c>='0' && c<='9')
printf("Invalid  Input");
else  
{
if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' ||c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U')
printf("Entered alphabet is a vowel");
else  
printf("Entered alphabet is a consonant");
}
}

