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
     int n,rem=0,rev=0,d;
     printf("Enter the no.-->");
     scanf("%d",&n);
     d=n;
     for(;n!=0;n=n/10)
     {
          rem=n%10;
          rev=(rev*10)+rem;
     }
     if(rev==d)
     printf("The no is palindrome");
     else
     printf("The no is not palindrome");
     getch();
}
