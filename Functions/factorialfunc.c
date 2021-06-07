//WAP to print factorial of no, return type with parameter passing 
#include<Stdio.h>
#include<conio.h>
void fact(int);//declaratyion 
void main()
{
     int x;
     printf("Enter the no.=");
     scanf("%d",&x);
     fact(x);//calling
     getch();
}
void fact(int n)//definition
{
     int i,f=1;
     for(i=1;i<=n;i++)
     {
                      f=f*i;
                      printf("Th fact %d is%d\n",i,f);
     }
}