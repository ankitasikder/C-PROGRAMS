#include<Stdio.h>
#include<conio.h>
void main()
{
     int matrix[10][10],i,j,m,n,sparse_count=0;
     printf("Enter the order of the matrix\n");
     scanf("%d %d",&m,&n);
     printf("Enter the elements of the matrix\n");
     for(i=0;i<m;i++)
     {
            for(j=0;j<n;j++)
            {
                   scanf("%d",&matrix[i][j]);
                   if(matrix[i][j]==0)
                   ++sparse_count;
            }
     }
     if(sparse_count>=((m*n)/2))
     printf("sparse matrix!");
     else
     printf("not sparse matrix!");

getch();
}
