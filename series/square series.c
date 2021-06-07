//WAP to print a series
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void main()
{
    int i,n,s;
    printf("Enter the range.-->");
    scanf("%d",&n);
    s=0;
    for (i=1;i<=n;i++)
    {
        s=i^2+s;
        printf("%d+ ",s);
    }
    printf("= %d",s);
    getch();
}

