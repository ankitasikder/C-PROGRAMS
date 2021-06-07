//no return type & with parameter
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void calc(int,int);//declaration
void main()
{
     int a,b;
     printf("Enter two no.");
     scanf("%d &d",&a,&b);
     calc(a,b);//calling
     getch();
}
void calc(int a,int b)//declaration
{
     printf("The addition %d\n",(a+b));
     printf("The substraction %d\n",(a-b)); 
     printf("The multiplication %d\n",(a*b));
      printf("The division %d\n",(a/b));
}
