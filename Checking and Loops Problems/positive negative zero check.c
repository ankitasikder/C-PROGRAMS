//check positive negative and zeroes
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
     int number,positive=0,negative=0,zero=0;
     char choice;
     do
     {
          printf("Enter a number=");
          scanf("%d",&number);
          if(number>0)
          {
                      positive++;
          }
          else if(number<0)
          {
                      negative++;
          }
          else
          {
              zero++;
          }
          printf("Do u want to continue(y/n)->");
          scanf("%c",&choice);
     }while(choice=='y');
     printf("\n positive=%d\n negative=%d\n zero=%d",positive,negative,zero);
     getch();
}
