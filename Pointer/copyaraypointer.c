//WAp to copy an array's value into another array using pointer
#include<Stdio.h>
#include<conio.h>
void main()
{
    char a[20],b[20],*p,*p1;
    printf("Enter the string=");
    gets(a);
    p=&a[0];
    p1=&b[0];
    while(*p!='\0')
    {
                   *p1=*p;
                   printf("%c",*p1);
                   p++;
                   p1++;
    }
//    p1=&b[0];
  //  printf("The copy string is=");
    /*while(*p1!='\0')
    {
                    printf("%c",*p1);
                    p1++;
    }*/
    getch();
} 

