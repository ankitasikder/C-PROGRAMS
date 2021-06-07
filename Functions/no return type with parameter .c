//Addition(no return type , with parameter passing)
#include<Stdio.h>
#include<conio.h>
void add(int,int);//declaration
void main()
{
     int a,b;
     printf("Enter the numbers=");
     scanf("%d %d",&a,&b);
     add(a,b);//calling
     getch();
}
void add(int a,int b)//definition
{
     printf("The addition is %d",(a+b));
}