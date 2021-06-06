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
     int a[10],i,n,x,f=0;
     printf("Enter the range->");
     scanf("%d",&n);
     //input array
     printf("Enter the number of array-->\n");
     for(i=0;i<=n;i++)
     {
             scanf("%d",&a[i]);
     }
     printf("Enter the number to be searched->");
     scanf("%d",&x);
     for(i=0;i<=n;i++)
     {
             if(a[i]==x)
             {
                        f=1;
                        break;
             }
     }
     if(f==1)
     printf("The number is found");
     else
     printf("Not found");

getch();
}
