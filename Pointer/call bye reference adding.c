
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<stdio.h>
long add(long*,long*);
void main()
{
     long a,b,*p,*q,sum=0;
      printf("Enter the numbers->");
     scanf("%d %d",&a,&b);
     sum=add(&a,&b);//call by reference
     printf("(%ld)+(%ld)=(%ld)\n",a,b,sum);
     getch();
}
long add(long *x,long *y)
{
     long sum;
     sum=*x+*y;
     return sum;
}
