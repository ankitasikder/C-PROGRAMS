//calc simple interest using func & no parameter passing
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void SI();//declaration
void main()
{
     SI();//calling
     getch();
}
void SI()//definition
{
     int p,r,t,I;
     printf("Enter the principle,rate of interest,time-->");
     scanf("%d, %d, %d",&p,&r,&t);
     I=(p*r*t)/100;
     printf("The simple interest is %d\n",I);
}
