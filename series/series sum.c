#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,s=0;
     printf("Enter the range-->");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         s=s+i;
         printf("%d+",i);
     }
     printf("=%d",s);
     getch();
}
