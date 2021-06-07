#include<Stdio.h>
#include<conio.h>
void circle();//declaration
void main()
{
     circle();//calling
     getch();
}
void circle()//definition
{
   float pi=3.14,r,ar,di;
   printf("Enter the radius-->");
   scanf("%f",&r);
   ar=pi*r*r;
   di=2*pi*r;
   printf("The area is=%.2f\n The diameter is %.2f",ar,di);
}


