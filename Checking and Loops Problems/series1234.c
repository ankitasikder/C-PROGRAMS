#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,j,n,k=1,sp;
     printf("Enter the number less than 5=");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
              for(sp=3;sp>=i;sp--)
              {
                     printf(" ");
              }
              for(j=1;j<=i;j++)
              {
                      printf(" %d ",k);
                      k++;
              }
              printf("\n");
     }
getch();
}
