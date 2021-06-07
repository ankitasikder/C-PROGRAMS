//WAP to print square of a no. using no return type no parameter 
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
