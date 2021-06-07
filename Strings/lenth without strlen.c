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
     char x[10];
     int i=0,c=0;
     printf("Enter your name-->");
     gets(x);
     for(;x[i]!='\0';i++)
     {
            c++;
     }
     printf("The length is %d",c);
     getch();
}
