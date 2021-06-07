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
     char X='A';
     int i,j;
     for (i=4;i>=1;i--)
     {
         for(j=1;j<=i;j++)
         {
             printf("%c ",X);
             X++;
         }
         printf("\n");
         X='A';
     }
     getch();
}
