//numbers print between 10 and 99which after exchange of digits become divisible by 7
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
     int n,num,rem=0,sum=0;
     for(n=10+1;n<=99-1;n++)
     {
            num=n;
            for(;num!=0;num=num/10)
            {
                 rem=num%10;
                 sum=(sum*10)+rem;
            }
           if(sum%7==0)
            printf("%d  ",n);
            
            else
            sum=0;
     }
getch();
}
