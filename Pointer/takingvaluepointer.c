//WAP to store a value using pointer
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
     int x,a1,*p,*p1;
     printf("Enter the 2 no.");
     scanf("%d%d",&x,&a1);
     p=&x;
     p1=&a1;
     printf("\nThe address of A is %u",p);
     printf("\nThe address of A1 is %u",p1);
     printf("\nThe value of A is %d",*p);
     printf("\nThe value of A1 is %d",*p1);
     getch();
}
