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
     int a[100][100],i,j,r,c,flag=0;
     printf("Enter the rows and columns->");
     scanf("%d %d",&r,&c);
     printf("\n\nEnter the elements of your matrix->\n\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
              printf("\n\n Enter element a[%d][%d]->",i,j);
              scanf("%d",&a[i][j]);
         }
     }
     flag=1;
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
               if(i!=j && a[i][j]!=a[j][i])
               {
                    flag=0;
                    break;
               }
               else if(i<r-1 && j<c-1 && i==j && a[i][i]!=a[i+1][i+1])
               {
                    flag=0;
                    break;
               }
         }
     }
     printf("\n\n Matrix->\n\n");
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
                         printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     if(flag==1)
     printf("\nIt is balanced matrix");
     else
     printf("\nIt is not balanced matrix");
getch();
}
