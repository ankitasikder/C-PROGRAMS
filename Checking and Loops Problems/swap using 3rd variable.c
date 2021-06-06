//Swapping using third variable
#include<Stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     printf("Enter the two numbers for swapping values=");
     scanf("%d %d",&a,&b);
     c=a;
     a=b;
     b=c;
      printf("\n\n     After swaping\t");
     printf("\nThe first number is=%d",a);
     printf("\nThe second number is=%d",b);
     
getch();
}
