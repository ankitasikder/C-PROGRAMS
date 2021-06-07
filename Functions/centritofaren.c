#include<Stdio.h>
#include<conio.h>
void temp();//declaration
void main()
{
     temp();//calling
     getch();
}
void temp()
{
     float f,c;
     printf("enter the centrigrade-->");
     scanf("%d",&c);
     f=((9*c)/5)+32;
     printf("The farenhite%.2f",f);
}

