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
     int n,rem=0,s=0,i,f=1,d;
     printf("Enter the no=");
     scanf("%d",&n);
     d=n;
     for(;n!=0;n=(n/10))//hgft2000782 450 zxs indistinct n/10 % n/100<200
     {
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
                           f=f*i;
        }
        s=s+f;
        f=1;
     }
     if(s==d)
     printf(" krishnamurty no.");
     else
     printf(" not krishnamurty no.");
     

getch();
}
