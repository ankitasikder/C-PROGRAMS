//Transpose of matrix
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void main()
{
      int a[10][10],trans[10][10],i,j,r,c;
      printf("\nEnter rows and columns of matrix->");
      scanf("%d %d",&r,&c);
      printf("\nEnter elements of matrix of matrix:\n");
      for(i=0;i<r;i++)
      {
            for(j=0;j<c;j++)
            {
                  printf("Enter element a%d%d: ",i+1,j+1);
                  scanf("%d", &a[i][j]);
            }
      }
      printf("\nEntered matrix: \n");
      for(i=0;i<r;i++)
      {
            for(j=0;j<c;j++)
            {
                  printf("%d  ",a[i][j]);
                  if(j==c-1)
                  printf("\n\n");
            }
      }
      for(i=0;i<r;i++)
      {
            for(j=0;j<c;j++)
            {
                  trans[j][i]=a[i][j];
            }
      }
      printf("Transpose of the matrix:\n");
      for(i=0;i<c;i++)
      {
            for(j=0;j<r;j++)
            {
                  printf("%d  ",trans[i][j]);
                  if(j==r-1)
                  printf("\n\n");
            }
      }
getch();
}
