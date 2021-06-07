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
     int n,a[10],sum=0,sum1=0,i;
     int a[i]={3,7,4,3,2,12,11,9,1,6,8,10,17};
     printf("Enter the number-->");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
              //[i]={3,7,4,3,2,12,11,9,1,6,8,10,17};
               sum1=a[i]*a[i++];
               sum=sum+sum1;
               printf("%d",sum);
     }
getch();
}
