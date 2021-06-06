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
     int hr,i,count=0,pay;
     printf("Enter number of hour=");
     scanf("%d",&hr);
     for(i=hr;i>40;i--)
     {
              count++;
              pay=count*12;
     }
     printf("over pay=%d",pay);
                       
getch();
}
