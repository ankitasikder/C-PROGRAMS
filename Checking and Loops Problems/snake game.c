//SNAKE GAME
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
int height=50,width=50;
void main()
{
     int i,j;
     for(i=0;i<=height;i++)
     {
             for(j=0;j<=width;j++)
             {
                    if(i==0 || j==0 || i==height || j==width)
                    printf("*");
                    else 
                    printf(" ");
             }
             printf("\n");
     }
     
getch();
}
