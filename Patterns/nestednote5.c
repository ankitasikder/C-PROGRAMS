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
    int i,j,k;
    for(i=5;i>=1;i--)
    {
                     for(j=5;j>i;j--)
                     {
                                     printf(" ");
                     }
                     for(k=1;k<(i*2);k++)
                     {
                                         printf("*");
                     }
                     printf("\n");
    }

getch();
}

