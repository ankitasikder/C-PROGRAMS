//check leap year 
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
      int Y;
      printf("Enter the year");
      scanf("%d",& Y);
      (Y%4==0 && Y%100!=0)?printf("leap year"):printf("Not leap year");
      getch();
}
