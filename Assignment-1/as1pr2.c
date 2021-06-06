//2.Write a C program to calculate simple interest
#include<Stdio.h>
#include<conio.h>
void main()
{
     int p,t,r,SI;
     printf("Enter the princple amount=");
     scanf("%d",&p);
     printf("Enter the year=");
     scanf("%d",&t);
     printf("Enter the rate of interest=");
     scanf("%d",&r);
     SI=(p*t*r)/100;
     printf("The simple interest=%d",SI);
getch();
}
