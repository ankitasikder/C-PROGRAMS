//WAP to print all the possible combinations of 1,2,3
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
     int a,b,c;
     for(a=1;a<=3;a++)
     {
            for(b=1;b<=3;b++)
            {
                    for(c=1;c<=3;c++)
                    {
                              if(a!=b && b!=c && c!=a)
                              printf("%d %d %d\n",a,b,c);
                    }
            }
     }
getch();
}
