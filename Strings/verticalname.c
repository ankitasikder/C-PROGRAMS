
#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char a[1],i,len;
     printf("Enter your name=");
     gets(a);
     len=strlen(a);
     for(i=0;i<len;i++)
     {
                        printf("%c\n",a[i]);
     }
getch();
}

