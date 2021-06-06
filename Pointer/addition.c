//addition using pointer
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