#include<Stdio.h>
#include<conio.h>
void square();
void main()//declaration
{
     square();//calling
     getch();
}
void square()
{
     int a,ar,pr;
     printf("Enter the side=");
     scanf("%d",&a);
     ar=a*a;
     pr=4*a;
     printf("The area=%d\nThe perimeter is=%d",ar,pr);
}