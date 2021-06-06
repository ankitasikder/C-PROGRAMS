//Write a C program to multiply two numbers using plus operator
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
