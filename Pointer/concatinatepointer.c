#include<Stdio.h>
#include<conio.h>
void main()
{
       char a[15],b[15],*p,*p1;
       printf("Enter the 1st string=");
       gets(a);
       printf("Enter the 2nd string=");
       gets(b);
       p=&a[0];
       for(;*p!='\0';p++)
       {
                         printf("%c",*p);
       }
       p1=&b[0];
       for(;*p1!='\0';p1++)
       {
                           printf("%c",*p1);
       }
       printf("%c%c",*p,*p1);
       getch();
}
