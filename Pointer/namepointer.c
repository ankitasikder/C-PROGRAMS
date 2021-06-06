//WAP to print ur name using pointer variable
#include<Stdio.h>
#include<conio.h>
void main()
{
     char a[20],*p;
     printf("Enter ur name=");
     gets(a);
     p=&a[0];
     for(;*p!='\0';p++)
     {
                       printf("%c",*p);
     }
getch();
}
