//* decoration 4 
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,j,n;
     printf("Enter the line no.-->");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=n;j>=i;j--)
         {
            printf("* ");
         }
         printf("\n");
     }
     getch();
}
