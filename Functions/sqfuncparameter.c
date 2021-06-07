//No return type & parameter passing 
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void sq(int);
void main()
{
     int x;
     printf("Enter the no.=");
     scanf("%d",&x);
     sq(x);//calling
     getch();
}
void sq(int a)//definition
{
     printf("The square is %d",(a*a));
}
