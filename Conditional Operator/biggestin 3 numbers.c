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
     int a,b,c,big;
     printf("Enter the three numbers=");
     scanf("%d %d %d",&a ,&b ,&c);
     big=a>b?(a>c?a:c):(b>c?b:c);
     printf("\n\nThe biggest number is=%d",big);
     getch();
}
