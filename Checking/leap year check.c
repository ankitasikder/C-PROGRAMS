#include<Stdio.h>
#include<conio.h>
void main()
{
     int y;
     printf("Enter the year");
     scanf("%d",& y);
     if(y%400==0)
     printf("It is leap year");
     else if(y%4==0 && y%100==0)
     printf("It is leap year");
     else
     printf("Not leap year");
     getch();
}
        