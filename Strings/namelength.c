#include<Stdio.h>
#include<conio.h>
void main()
{
     char x[1];
     int i=0,c=0;
     printf("Enter your name-->");
     gets(x);
     for(;x[i]!='\0';i++)
     {
                 c++;
     }
     printf("The length is %d",c);
getch();
}
