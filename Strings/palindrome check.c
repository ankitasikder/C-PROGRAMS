//check if a string is palindrome
#include<Stdio.h>
#include<conio.h>
void main()
{
     char x[15];
     int i,j,len,f=0;
     printf("Enter the string->");
     gets(x);
     len=strlen(x);
     for(i=0,j=len-1;i<=j;i++,j--)
     {
            if(x[i]==x[j])
            {
               f=1;
               break;
            }
     }
     if(f==1)
     printf("Palindrome string!");
     else
     printf("Not Palindrome string!");
getch();
}
