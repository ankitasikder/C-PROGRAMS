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
     int X;
     printf("Press 1 for Monday\n press 2 for Tuesday\n press 3 for Wednesday\n press 4 for Thursday\n press 5 for Friday\n press 6 for Saturday\n press 7 for Sunday\n");
     printf("Enter your choice");
     scanf("%d",&X);
     switch(X)
     {
              case 1:
                   printf("Monday");
                   break;
              case 2:
                   printf("Tuesday");
                   break;
              case 3:
                   printf("Wednesday");
                   break;
              case 4:
                   printf("Thursday");
                   break;
              case 5:
                   printf("Friday");
                   break;
              case 6:
                   printf("Saturday");
                   break;
              case 7:
                   printf("Sunday");
                   break;
              default:
                   printf("NA");
     }
getch();
}
