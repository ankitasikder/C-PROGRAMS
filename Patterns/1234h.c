#include<Stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=4;j>=i;j--)
        {
           printf("%d",j);
        }
        printf("\n");
    }
getch();
}