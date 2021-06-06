//WAP to print ur name using pointer variable& reverse ur name
#include<Stdio.h>
#include<conio.h>
void main()
{
     char a[20],*p;
     printf("Enter ur name=");
     gets(a);
     p=&a[0];
     //name print 
     for(;*p!='\0';p++)
     {
         printf("%c",*p);
     }
     //reverse
     printf("\nur reverse name=");
     p--;
     for(;*p!=0;p--)
     printf("%c",*p);
getch();
}
