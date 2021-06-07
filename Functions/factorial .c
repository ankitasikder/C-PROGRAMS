/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
void main()
{
    printf("Enter the number-->");
    fact();
    getch();
}
fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     fact=fact*i;
    }
    printf("The factorial is: %d",fact);
    return fact;
}
