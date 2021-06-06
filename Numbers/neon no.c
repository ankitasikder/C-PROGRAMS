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
     //12 neon nmbers are there 400 include 
     int f,n,rem,s=0;
     printf("Enter the no.=");
     scanf("%d",&n);
     f=n*n;
     for(;f!=0;f=(f/10))
     {
        rem=f%10;
        s=rem+s;
     }
     if(s==n)
     printf("neon no.");
     else("not neon no.");
getch();
}

