//WAP to print factorial
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
     int i,n,f=1;
     printf("Enter the no.");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       f=f*i;
     }
     printf("The factorial is %d",f);
     getch();
}
