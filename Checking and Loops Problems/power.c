//power one number on another
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
     int i,n,j,ans=1;
     printf("Enter the number on which power is put=");
     scanf("%d",&i);
     printf("Enter the power=");
     scanf("%d",&n);
     for(j=1;j<=n;j++)
     {
                      ans=i*ans;
     }
     printf("The result is=%d",ans);
     getch();
}
