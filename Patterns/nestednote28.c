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
     int i,j;
     for(i=1;i<=5;i++)
     {
                      for(j=5;j>i;j--)
                      printf(" ");
                      for(j=1;j<=i;j++)
                      printf("%d",j);
                      for(j=j-2;j>=1;j--)
                      printf("%d",j);
                      printf("\n");
     }
     
getch();
}
