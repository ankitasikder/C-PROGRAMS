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
     int a[10],i,min,n;
     printf("Enter the range=");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
                printf("number=");
                scanf("%d",&a[i]);
     }
     min=a[0];
     for(i=0;i<n;i++)
     {
                if(a[i]<min)
                {
                      min=a[i];
                }
               
     }
     printf("Minimum number is=%d",min);
getch();
}
