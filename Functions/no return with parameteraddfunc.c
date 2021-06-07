//no return type & with parameter
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