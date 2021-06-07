//loop F
#include<Stdio.h>
#include<conio.h>
void main()
{
   int i;
   for(i=1;i<=20;i++)
   {
    printf("@");
   }
   for(i=1;i<=20;i++)
   {
    if(i==10)
    printf("@@@@@@@@@@");
    else
    printf("@\n");
    }
    printf("\n");                 
   getch();
}

