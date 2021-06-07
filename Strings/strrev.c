//WAP to reverse a string or char array using inbuild function
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
     char x[1];
     printf("Enter your name=");
     gets(x);
     printf("Your original name is--> %s",x);
     strrev(x);//reverse
     printf("\nYour reverse name is--> %s",x);
getch();
}
