//Addition (no return type , no parameter passing)
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
     int a,b;
     printf("Enter two numbers=");
     scanf("%d %d",&a,&b);
     printf("The addition is %d",(a+b));
}
