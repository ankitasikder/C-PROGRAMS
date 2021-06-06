//Write a C program to multiply two numbers using plus operator
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
     int a,b,calc=0,i;
     printf("Enter the 1st number=");
     scanf("%d",&a);
     printf("Enter the 2nd number=");
     scanf("%d",&b);
     for( i=1;i<=a;i++)
     {
             calc=calc+b;
     }
     printf("\n\nThe multiplication of %d and %d is=%d",a,b,calc);
     
getch();
}
