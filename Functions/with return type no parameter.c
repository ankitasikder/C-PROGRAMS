//with return type, no parameter passing
#include<Stdio.h>
#include<conio.h>
int add();//declaration
void main()
{
     int x;
     x=add();//calling
     printf("The addition is %d",x);
     getch();
}
int add()//definition
{
     int a,b,c;
     printf("Enter two numbers=");
     scanf("%d %d",&a,&b);
     c=a+b;
     return c;
}
