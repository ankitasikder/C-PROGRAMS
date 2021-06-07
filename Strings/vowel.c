//vowel check
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
     char X;
     printf("Enter the character-->");
     scanf("%c",&X);
     switch(X)
     {
              case 'a': case 'A':
              case 'e': case 'E':
              case 'i': case 'I':
              case 'o': case 'O':
              case 'u': case 'U':
                   printf("Vowel");
                   break;
                   case' ':case'@':case'#':case'$':case'*':
                         printf("special case");
                         break;
                         default:
                                 printf("consonent");
     }
     getch();
}
