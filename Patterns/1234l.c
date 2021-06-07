#include<Stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,k=0;
   printf("Enter the line no.-->");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
          k=k+1;             
          printf("%d ",k);
       }
       printf("\n");
   }
   getch();
}
