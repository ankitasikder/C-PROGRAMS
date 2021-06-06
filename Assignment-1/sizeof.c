//Write a C program to print size of variables using sizeof() operator
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
int main()
{
     char a='A';
     int b=120;
     float c=123.0;
     double d=1222.90;
     char str[10]="Hellow";
     printf("\nsize of a=%d\nsize of b=%d\nsize of c=%d\nsize of d=%d\nsize of str[10]=%d",sizeof(a),sizeof(b),sizeof(c),sizeof(str));
     getch();
}
