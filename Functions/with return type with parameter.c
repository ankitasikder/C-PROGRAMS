//with return type ,with parameter passing
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/

#include<Stdio.h>
#include<conio.h>
int add(int,int);//declaration
void main()
{
     int p,a,b;
     printf("Enter two numbers=");
     scanf("%d %d",&a,&b);
     p=add(a,b);//calling
     printf("The addition is %d",p);
     getch();
}
int add(int a,int b)//definition
{
    int c;
    c=a+b;
    return c;
}
