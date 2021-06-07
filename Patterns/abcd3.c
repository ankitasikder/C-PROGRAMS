#include<Stdio.h>
#include<conio.h>
void main()
{
    char X='A';
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
        X='A';
    }
    getch();
}
