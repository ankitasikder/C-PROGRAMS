#include<Stdio.h>
#include<conio.h>
void main()
{
     char x[20];
     int i=0,c=0;
     printf("Enter your name-->");
     gets(x);
     for(;x[i]!='\0';i++)
     {
            printf("%c",x[i]);             
            c++;
     }
     printf("\n Reverse of the name-->");
     for(i=c-1;i>=0;i--)
     {
            printf("%c",x[i]); 
     }
getch();
}
