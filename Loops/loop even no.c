//WAP to print i's value runtime even no.
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
     int i,n;
     printf("Enter the range-->");
     scanf("%d",&n);
     for (i=2;i<=n;i=i+2)
     {
         printf("i's value=%d\n",i);
     }
     getch();
}
