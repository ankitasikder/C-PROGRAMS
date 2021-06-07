//cube series
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,s=0;
     printf("Enter the range");
     scanf("%d",&n);
     for (i=i;i<=n;i++)
     {
         s=i^3+s;//s=i^&3+s;
         printf("%d+",i);
     }
     printf("=%d",s);
     getch();
}
