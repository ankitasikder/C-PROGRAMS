#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[1];
     int len,i;
     printf("Enter your name=");
     gets(x);
     len=strlen(x);
     printf("Your name length is-->%d\n",len);
     printf("%c",x[0]);
     for(i=1;i<len;i++)
     {
                        if(x[i]==' ')
                        printf("%c",x[i+1]);
     }
getch();
}
