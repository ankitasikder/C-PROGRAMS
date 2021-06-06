//addition using pointer
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<stdio.h>
#include<stdio.h>
void main()
{
     int a,b,*p,*q,sum=0;
     printf("Enter the numbers->");
     scanf("%d %d",&a,&b);
     p=&a;
     q=&b;
     sum=(*p+*q);
     printf("The sum is=%d",sum);
     getch();
}
