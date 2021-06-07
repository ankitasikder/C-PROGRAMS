/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[15],y[15];
     int len,i;
       printf("Enter the name->");
     gets(x);
     len=strlen(x);
     for(i=0;i<len;i++)
     {
          y[i]=x[i];
     }
       for(i=0;i<len;i++)
     {
          printf("%c",y[i]);
     }
    
    // printf("The copied name is->%s",y);
getch();
}
