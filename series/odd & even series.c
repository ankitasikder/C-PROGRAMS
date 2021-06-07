//WAP to print odd & even series
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n;
     printf("Enter the range-->");
     scanf("%d",&n);
     printf("-------------------------------\n");
     printf("ODD\t EVEN\n");
     printf("-------------------------------\n");
     for(i=1;i<=n;i++)
     {
         if (i%2==0)
         printf("%d\n",i);
         else
         printf("%d\t",i);
     }
getch();
}
