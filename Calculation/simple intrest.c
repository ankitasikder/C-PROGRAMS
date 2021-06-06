#include<Stdio.h>
#include<conio.h>
void main()
{
   int p,r,t,I;
   printf("Enter the principle");
   scanf("%d",&p);
   printf("Enter the rate of interest");
   scanf("%d",&r);
   printf("Enter the time");
   scanf("%d",&t);
   I=(p*r*t)/100;
   printf("The simple interest is%d",I);
   getch();
}   


