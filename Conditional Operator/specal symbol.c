#include<Stdio.h>
#include<conio.h>
void main()
{
     char ch;
     printf("Enter any character=");
     scanf("%c",&ch);
     (ch>='a' && ch<='z')||(ch>='A' && ch<='z')||(ch>=0 && ch<=9)?printf("NOT special symbol"):printf("Special symbol");
    
getch();
}
