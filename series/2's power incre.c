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
     int n,i,s=0;
     printf("Enter the range");
     scanf("%d",&n);
     for(i=4;i<=n;i=i*2)
     {
           
           s=s+i;
           printf("%d+ ",i);
     }
     printf(" = %d",s);
getch();
}
