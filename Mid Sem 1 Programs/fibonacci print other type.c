//FIBONACCI SERIES
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
//FIBONACCI SERIES
#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,i,j,a=0,b=1,c=0;
     printf("Enter the no."); 
     scanf("%d",&n);
     printf("%d %d",a,b);
     for(i=1;i<=n;i++)
     {
         c=a+b;
         printf(" %d ",c);
         a=b;
         b=c;
     }
     for(j=1;j<=4;j++)
     {
                      printf("");
    }
     getch();
     
}
