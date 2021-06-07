/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[1],len=0,i,j,f=0;
     printf("Enter your name=");
     gets(x);
     len=strlen(x);
     //print original name
     for(i=0,j=len-1;i<=j;i++,j--)
     {
           if(x[i]==x[j])
           f=0;
           else
           f=1;
     }    
     if(f==0)
      printf("Palindrome");
     else
      printf("NOT Palindrome");
getch();
}

