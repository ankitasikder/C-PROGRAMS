//WAP to store character & print the char using pouinter variable
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
     char x,y,*p,*p1;
     printf("Enter 2 character=");
     scanf("%c%c",&x,&y);
     p=&x;
     p1=&y;
     printf("The address is %u",p);
     printf("\nThe value is %c",*p);
     printf("\nThe address is %u",p1);
     printf("\nThe value is %c",*p1);
     getch();
}
