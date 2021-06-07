//* decoration 4 
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
     int i,j,n;
     printf("Enter the line no.-->");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=n;j>=i;j--)
         {
            printf("* ");
         }
         printf("\n");
     }
     getch();
}
