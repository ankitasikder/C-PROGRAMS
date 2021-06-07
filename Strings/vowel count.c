#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[10];
     int i,len=0,c=0;
     printf("Enter the name->");
     gets(x);
     len=strlen(x);
     for(i=0;i<len;i++)
     {
           switch(x[i])
           {
                case 'a': case 'A':
                case 'e': case 'E':
                case 'i': case 'I':
                case 'o': case 'O':
                case 'u': case 'U':
                c++;
                break;
           }
     }
     printf("The number of vowel is--> %d",c);
     getch();
}
