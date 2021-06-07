//p339(vi)
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
     int n,ce=0,co=0,rem=0;
     printf("Enter the no-->");
     scanf("%d",&n);
     for(;n>0;n=n/10)
     {
             rem=n%10;
             if(rem%2==0)
             {
                         ce++;
             }
             else
             {
                         co++;
             }
     }
     printf("Even digit=%d\n",ce);
      printf("Odd digit=%d\n",co);
getch();
}
