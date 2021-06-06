//Write a C program to convert feet to inches and vice versa
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
     float feet,inch,calc;
     printf("Enter the feet=");
     scanf("%f",&feet);
     inch=(feet*12);
     calc=inch;
     inch=0;
     printf("\n\n%.2f ft==>%.3f inches\n",feet,calc);
     feet=0;
     printf("\nEnter the inches=");
     scanf("%f",&inch);
     feet=(inch/12);
     printf("\n\n%.2f inch==>%.3f feet\n",inch,feet);
         
     
getch();
}
