//create a calculator
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
    int a,b,c,X;
    printf("press 1 for add\n press 2 for substract\n press 3 for multiplication\n press 4 for division\n press 5 for modulus\n");
    printf("Enter 2 no,.");
    scanf("%d%d",&a,&b);
    printf("Enter the choice");
    scanf("%d",&X);
    switch(X)
    {
             case 1:
                  c=a+b;
                  printf("The addition is %d",c);
                  break;
             case 2:
                  c=a-b;
                  printf("The substraction is %d",c);
                  break;
             case 3:
                  c=a*b;
                  printf("The multiplication is %d",c);
                  break;
             case 4:
                  c=a/b;
                  printf("The division is %d",c);
                  break;
             case 5:
                  c=a%b;
                  printf("The modulus is %d",c);
                  break;
             default:
                     printf("NA");
    }
    getch();
}
