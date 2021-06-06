//WAP to print ur name using pointer variable
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
     char a[20],*p;
     printf("Enter ur name=");
     gets(a);
     p=&a[0];
     for(;*p!='\0';p++)
     {
                       printf("%c",*p);
     }
getch();
}
