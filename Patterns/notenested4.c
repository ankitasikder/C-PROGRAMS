#include<Stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
                     for(j=1;j<5;j++)
                     {
                                     printf(" ");
                     }
                     for(k=1;k<(i*2);k++)
                     {
                                         printf("*");
                     }
                     printf("\n");
    }

getch();
}
