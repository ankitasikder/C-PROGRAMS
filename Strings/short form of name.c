#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[10];
     int len,i;
     printf("Enter your name->");
     gets(x);
     len=strlen(x);
     printf("%c",x[0]);
     for(i=1;i<len;i++)
     {
           if(x[i]==' ')
           printf("%c",x[i+1]);
     }
           
getch();
}
