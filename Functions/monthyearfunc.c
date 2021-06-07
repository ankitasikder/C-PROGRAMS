#include<Stdio.h>
#include<conio.h>
void mon();//declaration
void main()
{
      mon();//calling
      getch();
}
void mon()//definition
{
     int M,Y;
     printf("Enter the year=");
     scanf("%d",&Y);
     M=Y*12;
     printf("month=%d\n",M);
}
