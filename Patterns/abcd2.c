#include<Stdio.h>
#include<conio.h>
void main()
{  
     char X='A';
     int i,j;
     for (i=4;i>=1;i--)
     {
         for(j=1;j<=i;j++)
         {
             printf("%c ",X);
             X++;
         }
         printf("\n");
         X='A';
     }
     getch();
}
