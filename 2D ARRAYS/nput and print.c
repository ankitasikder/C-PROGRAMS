#include<Stdio.h>
#include<conio.h>
void main()
{
     int a[5][5],i,j,n;
     printf("Enter the range->");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
            for(j=0;j<n;j++)
            {
                  printf("Enter the number->");
                  scanf("%d",&a[i][j]);
            }
     }
      for(i=0;i<n;i++)
     {
            for(j=0;j<n;j++)
            {
                  printf("The value at position a[%d][%d] is %d->",i,j,a[i][j]);
            }
            printf("\n");
     }
getch();
}
