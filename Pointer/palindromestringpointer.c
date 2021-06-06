#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[15],*p,*p1;
    int len,f=0;
    printf("Enter the 1st string=");
    gets(a);
    len=strlen(a);
    p=&a[0];
    p1=&a[len-1];
    
    for(;p<=p1;p++,p1--)
    {
                        if(a[*p]!=a[*p1])
                        {
                                       f=1;
                                       break;
                        }
    }
    if(f==0)
    printf("palindrome string");
    else
    printf("not palindrome string");
    getch();
}
    
