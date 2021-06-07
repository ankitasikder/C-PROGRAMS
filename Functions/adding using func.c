//WAP to add 2 no. using func. no return type & no parameter passing
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void add();//declaration
void main()
{
     add();//calling
     getch();
}
void add()//definition
{
     int a,b,c;
     printf("Enter two no=");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("The addition is %d",c);
}


