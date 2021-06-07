//No return type & parameter passing 
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
