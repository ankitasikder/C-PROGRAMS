//WAP to check is even or odd no return type no parameter
#include<Stdio.h>
#include<conio.h>
void evenodd();//declaration 
void main()
{
     evenodd();//calling
     getch();
}
void evenodd()//declaration
{
     int x;
     printf("Enter the no.-->");
     scanf("%d",&x);
     if(x%2==0)
     printf("even no.");
     else
     printf("odd no.");
}
     

