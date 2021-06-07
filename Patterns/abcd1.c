#include<Stdio.h>
#include<conio.h>
void main()
{
    char X='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
       for(j=1;j<=4;j++)
       {
           printf("%c ",X);
       }
       printf("\n");
       X++;
    }
    getch();
}

