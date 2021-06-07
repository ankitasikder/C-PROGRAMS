#include<Stdio.h>
void main()
{
     printf("Enter the year-->");
     leap_check();
     getch();
}
leap_check()
{
     int y;
     scanf("%d",& y);
     if(y%400==0)
     {
                 printf("It is leap year");
     }
     else if(y%4==0 && y%100==0)
     {
          printf("It is leap year");
     }
     else
     {
         printf("Not leap year");
     }
     return y;
}
