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
     int a[10],i,n,s=0,avg=0;
     printf("Enter the range->");
     scanf("%d",&n);
     //input array
     printf("Enter the number of array-->\n");
     for(i=0;i<=n;i++)
     {
             
             scanf("%d",&a[i]);
             s=s+a[i];
     }
     for(i=0;i<=n;i++)
     {
             printf("The numbers of array a[%d] is -->%d\n",i,a[i]);
             
     }
     avg=s/n;
     printf("The average is: %d",avg);
     getch();
}
