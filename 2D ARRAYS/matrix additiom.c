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
     int a[10][10],b[10][10],c[10][10],p,q,m,n;
     printf("Enter the number of rows and columns->");
     scanf("%d %d",&m,&n);
     printf("Enter the Elements of Matrix A:");
     for(p=0;p<m;p++)
     for(q=0;q<n;q++)
     scanf("%d",&a[p][q]);
     printf("Enter the Elements of Matrix B:");
     for(p=0;p<m;p++)
     for(q=0;q<n;q++)
     scanf("%d",&b[p][q]);
     //Addition operation
     for(p=0;p<m;p++)
     for(q=0;q<n;q++)
     c[p][q]=a[p][q]+b[p][q];
     //write the output
     printf("The addition of the Matrices is :\n");
     for(p=0;p<m;p++)
     {
           for(q=0;q<n;q++)
           printf("%d \n ",c[p][q]);
           
     }

getch();
}
