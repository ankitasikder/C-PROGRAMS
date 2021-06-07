/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void mon();//declaration
void main()
{
      mon();//calling
      getch();
}
void mon()//definition
{
     int M,Y;
     printf("Enter the year=");
     scanf("%d",&Y);
     M=Y*12;
     printf("month=%d\n",M);
}
