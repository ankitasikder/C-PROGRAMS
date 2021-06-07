//WAP to print factorial of no, return type with parameter passing 
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
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
