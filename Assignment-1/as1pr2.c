//2.Write a C program to calculate simple interest
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
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
