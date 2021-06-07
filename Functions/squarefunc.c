//WAP to print square of a no. using no return type no parameter 
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void sq();//declaration
void main()
{
     sq();//calling
     getch();
}
void sq()//definition
{
     int a;
     printf("Enter the no.=");
     scanf("%d",&a);
     printf("The square is %d",(a*a));
     
}
